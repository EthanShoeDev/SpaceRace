using System.Collections;
using System.Collections.Generic;
using AppAdvisory.social;
using UnityEngine;

public class LeaderBtnScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnClicked()
    {
        LeaderboardManager.ShowLeaderboardUI();
    }
}
