using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIShip : MonoBehaviour
{

    public GameObject Canvas;
    public GameObject MenuPanel;
    public GameObject Fire;
    public float MovSpeed = 3f;
    [Range(0.0f, 1.0f)]
    public float LerpSpeed = 0.5f;


    private bool playStarted;
    private float lerp;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	    if (playStarted)
	    {
	        transform.Translate(0, Mathf.Lerp(0f, MovSpeed, lerp), 0);
	        lerp += LerpSpeed * Time.deltaTime;
            if(transform.position.x - 5 > Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0)).x)
                SceneManager.LoadScene("Game");
	    }
	}

    public void PlayClicked()
    {
        playStarted = true;
        transform.SetParent(Canvas.transform);
        MenuPanel.SetActive(false);
        Fire.SetActive(true);
    }
}
