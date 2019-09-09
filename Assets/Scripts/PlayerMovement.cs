using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float movSpeed = 3.5f;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update ()
	{
        if (GameController.Instance.IsGameStarted)
	    {
	        Vector2 touchPos = Vector2.zero;
            if(!Application.isMobilePlatform)
	            touchPos = Input.mousePosition;
            else
            {
                foreach (Touch touch in Input.touches)
                {
                    if (touch.position.x > Screen.width / 2)
                    {
                        touchPos = touch.position;
                        break;
                    }
                }
                if (touchPos == Vector2.zero)
                    return;
            }
	        if (!Application.isMobilePlatform && GameController.IsMouseOffScreen()) //Wont be neccary with touch input
	            return;
	        touchPos = Camera.main.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, 0));
	        var pos = transform.position;
	        pos.y += (touchPos.y - pos.y) * movSpeed * Time.deltaTime;
	        transform.position = pos;
        }
	}
}
