﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Bot : MonoBehaviour
{
    public LayerMask raycastMaskWalls;

    public Vector3 rayStartPosition = new Vector3(0, 0, 0);
    public int radusRay = 20;
    public float startProtection = 1.0f;
    public float rayDistance = 20.0f;
    public bool drawRays = false;

    private float[] input;
    public NeuralNetwork network;

    public float fitness;
    public bool stop = false;

    private void Start()
    {
        transform.parent = null;
        input = new float[360/radusRay];
    }

    private void FixedUpdate()
    {
        if(!stop)
        {
            for (int i = 0; i < 360/radusRay; i++)
            {
                Vector3 newVector = Quaternion.AngleAxis(i * radusRay, new Vector3(0, 1, 0)) * transform.right;
                RaycastHit hit;
                Ray Ray = new Ray(transform.position + rayStartPosition, newVector);

                if(drawRays) Debug.DrawRay(transform.position + rayStartPosition, newVector * rayDistance, Color.green);

                if (Physics.Raycast(Ray, out hit, rayDistance, raycastMaskWalls))
                {
                    if (hit.collider.gameObject.name != gameObject.name)
                    {
                        input[i] = (rayDistance - hit.distance) / rayDistance;
                    }
                }
                else
                {
                    input[i] = 0;
                }
            }
            
            if (GetComponent<Rigidbody>().velocity.magnitude < 0.01f) fitness -= 0.01f;
            if (GetComponent<Rigidbody>().velocity.magnitude > 0.1f) fitness += 0.01f;

            if (transform.position.y <= 50)
            {
                fitness -= 5.0f;
                stop = true;
            }

            fitness -= Time.deltaTime / 100;

            float[] output = network.FeedForward(input);

            GetComponent<RearWheelDrive>().horizontalAxis = output[0];
            GetComponent<RearWheelDrive>().verticalAxis = output[1];

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
            fitness += 20.0f;
            stop = true;
        }
    }

    private void OnTriggerEnter(Collider collider)
    {
    }


    public void UpdateFitness()
    {
        network.fitness = fitness;
    }
}