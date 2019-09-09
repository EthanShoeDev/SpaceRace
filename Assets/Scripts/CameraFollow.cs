using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{

    public GameObject Target;
    public float Ymin = -17;
    public float Ymax = 17;
    public float CameraMovSpeed = 5f;

    private Camera camComp;

	// Use this for initialization
	void Start ()
	{
	    camComp = GetComponent<Camera>();
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (Target != null)
        {
            var pos = transform.position;
            pos.y += (Target.transform.position.y - pos.y) * CameraMovSpeed * Time.deltaTime;
            if (pos.y >= Ymax - camComp.orthographicSize)
                return;
            if (pos.y <= Ymin + camComp.orthographicSize)
                return;
            transform.position = pos;
        }
    }
}
