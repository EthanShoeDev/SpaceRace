using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatingBck : MonoBehaviour
{

    public float XOffSet = 30;
    public GameObject OtherBack;

    private float XCamBound;
	// Use this for initialization
	void Start ()
	{
	    XCamBound = Camera.main.ScreenToWorldPoint(Vector3.zero).x;
	}
	
	// Update is called once per frame
	void Update ()
	{
	    MatchToOther();
	    if (transform.position.x <= XCamBound - XOffSet / 2)
	    {
	        //transform.Translate(XOffSet * 2, 0, 0, 0);
	        Vector3 other = OtherBack.transform.position;
	        other.x += XOffSet;
	        transform.position = other;
            //Debug.Log("WOLF1337 Moved Background, Game Speed: " + GameController.Instance.GameMovSpeed +  " Is Cap Set: " + GameController.Instance.DontAddToSpeed);

        }
    }

    private void MatchToOther()
    {
        if (transform.position.x > OtherBack.transform.position.x)
        {
            if (Math.Abs(30f - (Math.Abs(transform.position.x) + Math.Abs(OtherBack.transform.position.x))) > 0.001)
            {
                var pos = OtherBack.transform.position;
                pos.x += 30;
                transform.position = pos;
            }
        }
        else if(transform.position.x < OtherBack.transform.position.x)
        {
            if (Math.Abs(30f - (Math.Abs(transform.position.x) + Math.Abs(OtherBack.transform.position.x))) > 0.001)
            {
                var pos = transform.position;
                pos.x += 30;
                OtherBack.transform.position = pos;
            }
        }
    }
}
