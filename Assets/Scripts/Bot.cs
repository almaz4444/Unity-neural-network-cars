using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Bot : MonoBehaviour
{
    public Transform followPos;
    public Transform lookPos;
    public List<GameObject> detectedCheckPoints = new List<GameObject>();
    public LayerMask raycastMaskWalls;

    public Transform[] raysTransforms;
    public float startProtection = 1.0f;
    public float rayDistance = 20.0f;
    public bool drawRays = false;

    public static int[] layers;
    public static float[] input;
    public NeuralNetwork network;

    public float fitness;
    public bool stop = false;

    private float timeOldRotateWheels = 0;
    private float oldRotateWheels = 0;

    public static void Awake(int[] layer)
    {
        layers = layer;
        input = new float[layers[0]];
    }

    private void Start()
    {
        transform.parent = null;
    }

    private void FixedUpdate()
    {
        if(!stop)
        {
            for (int i = 0; i < raysTransforms.Length; i++)
            {
                Vector3 newVector = Vector3.zero;
                RaycastHit hit;

                if(i < 9) newVector = Quaternion.AngleAxis(i * 20 - 80, Vector3.up) * transform.forward;
                else if(i < 12) newVector = Quaternion.AngleAxis(180, Vector3.up) * transform.forward;
                else if(i < 15) newVector = Quaternion.AngleAxis(-90, Vector3.up) * transform.forward;
                else if(i < 18) newVector = Quaternion.AngleAxis(90, Vector3.up) * transform.forward;

                Ray Ray = new Ray(raysTransforms[i].position, newVector);

                if(drawRays) Debug.DrawRay(raysTransforms[i].position, newVector * rayDistance, Color.green);

                if (Physics.Raycast(Ray, out hit, rayDistance, raycastMaskWalls))
                {
                    if (hit.collider.gameObject != this.gameObject)
                    {
                        input[i] = (rayDistance - hit.distance) / rayDistance;
                    }
                }
                else
                {
                    input[i] = 0;
                }
            }
            input[raysTransforms.Length] = transform.localRotation.y / 360;
            input[raysTransforms.Length + 1] = Mathf.Abs(GetComponent<Rigidbody>().velocity.magnitude) / 100;

            if (transform.position.y <= 50)
            {
                fitness -= 5.0f;
                stop = true;
            }

            float[] output = network.FeedForward(input);

            GetComponent<RearWheelDrive>().horizontalAxis = output[0];
            GetComponent<RearWheelDrive>().verticalAxis = output[1];

            if(output[0] != oldRotateWheels && Time.time - timeOldRotateWheels >= 0.5f)
            {
                fitness -= (0.01f * Mathf.Abs(output[0] - oldRotateWheels));

                oldRotateWheels = output[0];
                timeOldRotateWheels = Time.time;
            }
        }
        else
        {
            GetComponent<RearWheelDrive>().horizontalAxis = 0;
            GetComponent<RearWheelDrive>().verticalAxis = 0;
        }

        if(startProtection > 0)
        {
            stop = false;
            fitness = 0;
            startProtection -= Time.deltaTime;
        }
    }


    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.layer == LayerMask.NameToLayer("Default") && !stop) 
        {
            fitness -= 10.0f;
            stop = true;
        }
        if(collision.gameObject.layer == LayerMask.NameToLayer("Win") && !stop) 
        {
            fitness += 10.0f;
            stop = true;
        }
        if(collision.gameObject.layer == LayerMask.NameToLayer("CarsColliders") && collision.gameObject != this.gameObject && !stop)
        {
            fitness -= 10.0f;
            stop = true;
        }
    }

    private void OnTriggerEnter(Collider collider)
    {
        if(collider.gameObject.layer == LayerMask.NameToLayer("Default") && !stop && Manager.training) 
        {
            fitness -= 10.0f;
            stop = true;
        }
        if(collider.gameObject.layer == LayerMask.NameToLayer("CheckPoint") && !stop)
        {
            bool isCollided = false;

            foreach (GameObject checkPoint in detectedCheckPoints)
            {
                if (checkPoint == collider.gameObject) isCollided = true;
            }
            if(!isCollided)
            {
                fitness += 2f;
                if(detectedCheckPoints.Count < 2) detectedCheckPoints.Add(collider.gameObject);
                else
                {
                    detectedCheckPoints[1] = detectedCheckPoints[0];
                    detectedCheckPoints[0] = collider.gameObject;
                }
            }
        }
    }


    public void UpdateFitness()
    {
        network.fitness = fitness;
    }
}
