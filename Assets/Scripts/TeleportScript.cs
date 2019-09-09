using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TeleportScript : MonoBehaviour
{

    public float Cooldown = 4f;
    public Text CountDownText;
    public float TeleportDist = 3f;
    public float LerpSpeed = 0.5f;
    public float TimeToTeleport = 0.01f;

    //public delegate void TeleportEventHandler(object source, float dist, EventArgs args);

    //public event TeleportEventHandler Teleport;

    private float baseTeleDist;
    private float baseSpeed;
    private float coolDownLeft = 0;
    private Image imgRender;
    private bool isTeleporting = false;
    private float lerp = 0;
    private float teleSpeed;

    //Audio Stuff
    private int fileId;
    private int streamId;

    // Use this for initialization
    void Start ()
    {
        fileId = GameController.Instance.ANALoadAudio("Teleport.wav");
	    imgRender = GetComponent<Image>();
	    baseTeleDist = TeleportDist;
	}
	
	// Update is called once per frame
	void Update ()
	{
        if(Input.GetKeyDown(KeyCode.Alpha1))
            ButtonClicked("Alpa Key 1");

	    if (coolDownLeft < 0)
	        coolDownLeft = 0;
	    if (coolDownLeft == 0 && CountDownText.IsActive())
	        CountDownText.gameObject.SetActive(false);
	    if (coolDownLeft > 0)
	    {
            if(!CountDownText.IsActive())
                CountDownText.gameObject.SetActive(true);
            coolDownLeft -= Time.deltaTime;
	        imgRender.fillAmount = Mathf.Clamp(1 - coolDownLeft / Cooldown, 0, 1);
	        CountDownText.text = coolDownLeft.ToString("0.0");
	    }
	    if (isTeleporting)
	    {
	        TeleportDist -= teleSpeed * Time.deltaTime;
	        if (TeleportDist >= baseTeleDist - (1 / LerpSpeed))
	        {
	            lerp = (TeleportDist - (baseTeleDist - (1 / LerpSpeed))) / (1 / LerpSpeed);
	            GameController.Instance.GameMovSpeed = Mathf.Lerp(baseSpeed, teleSpeed, 1 - lerp);
	        }
	        else
	        {
	            GameController.Instance.GameMovSpeed = teleSpeed;
	            lerp = 0;
	        }
	        if (lerp < 0)
	            lerp = 0;
	        if (TeleportDist <= 1 / LerpSpeed)
	        {
	            lerp = TeleportDist / (1 / LerpSpeed);
	            GameController.Instance.GameMovSpeed = Mathf.Lerp(baseSpeed, teleSpeed, lerp);
	        }
	        if (lerp > 1)
	            lerp = 1;
            if (TeleportDist <= 0)
            {
                GameController.Instance.AbilityInUse = false;
                isTeleporting = false;
	            GameController.Instance.GameMovSpeed = baseSpeed;
                if(!GameController.Instance.InvinEnabled)
	                GameController.Instance.GodMode = false;
                TeleportDist = baseTeleDist;
            }
	    }
    }

    public void ButtonClicked(string ok)
    {
        if (coolDownLeft == 0 && !GameController.Instance.GameOver && !GameController.Instance.AbilityInUse)
        {
            if (!GameController.Instance.FXMuted)
            {
                if (Application.platform == RuntimePlatform.Android)
                    streamId = AndroidNativeAudio.play(fileId);
                else
                    GetComponent<AudioSource>().Play();
            }
            GameController.Instance.AbilityInUse = true;
            coolDownLeft = Cooldown;
            isTeleporting = true;
            GameController.Instance.GodMode = true;
            baseSpeed = GameController.Instance.GameMovSpeed;
            teleSpeed = (baseTeleDist * GameController.Instance.DefaultScrollSpeed) / TimeToTeleport;
            //OnTeleport();
        }
        Debug.Log(ok);
    }

    //protected virtual void OnTeleport()
    //{
    //    if(Teleport != null)
    //        Teleport(this, TeleportDist, EventArgs.Empty);
    //}
}
