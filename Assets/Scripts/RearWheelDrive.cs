using UnityEngine;
using System.Collections;

public class RearWheelDrive : MonoBehaviour {

	private WheelCollider[] wheels;

	public bool isBot = true;

	public float maxAngle = 30;
	public float maxTorque = 300;
	public GameObject wheelShape;
	
	public float horizontalAxis = 0.0f;
	public float verticalAxis = 0.0f;

	public void Start()
	{
		wheels = GetComponentsInChildren<WheelCollider>();

		for (int i = 0; i < wheels.Length; ++i) 
		{
			var wheel = wheels [i];

			// create wheel shapes only when needed
			if (wheelShape != null)
			{
				var ws = GameObject.Instantiate (wheelShape);
				ws.transform.parent = wheel.transform;
			}
		}
	}

	public void Update()
	{
		float angle;
		float torque;
		
		angle = maxAngle * horizontalAxis;
		torque = maxTorque * verticalAxis;

		foreach (WheelCollider wheel in wheels)
		{
			if (wheel.transform.localPosition.z > 0)
				wheel.steerAngle = angle;

			if (wheel.transform.localPosition.z < 0)
				wheel.motorTorque = torque;

			if (wheelShape) 
			{
				Quaternion q;
				Vector3 p;
				wheel.GetWorldPose (out p, out q);

				Transform shapeTransform = wheel.transform.GetChild (0);
				shapeTransform.position = p;
				shapeTransform.rotation = q;
				shapeTransform.localScale = new Vector3(1, 1, 1);
			}

		}
	}
}
