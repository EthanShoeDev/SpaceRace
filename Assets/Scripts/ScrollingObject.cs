using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScrollingObject : MonoBehaviour
{
    public float ScrollSpeed = -1;
    public float XposDespawn = -1;
    public bool UseGameSpeed = true;

    private float baseScrollSpeed;

    private bool UI = false;
    //private TeleportScript teleportScript;

    void Start()
    {
        //teleportScript = GameObject.Find("Teleport").GetComponent<TeleportScript>();
        //teleportScript.Teleport += OnTeleport;
        UI = SceneManager.GetActiveScene().name == "MainMenu";
        if (ScrollSpeed == -1 && !UI)
            ScrollSpeed = GameController.Instance.DefaultScrollSpeed;
        baseScrollSpeed = ScrollSpeed;

    }

    void Update()
    {
        if (!UI)
            if(GameController.Instance.GameOver)
                return;
        if (XposDespawn != -1 && transform.position.x < XposDespawn)
            SimplePool.Despawn(gameObject);
        if(UseGameSpeed)
            ScrollSpeed = baseScrollSpeed * GameController.Instance.GameMovSpeed;
        transform.Translate(new Vector3(-ScrollSpeed*Time.deltaTime, 0), Space.World);
    }

    //public void OnTeleport(object source, float dist, EventArgs args)
    //{
    //    transform.Translate(-dist, 0, 0, Space.World);
    //}
}