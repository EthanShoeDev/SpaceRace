using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SlowTimeScript : MonoBehaviour {

    public float Cooldown = 4f;
    public Text CountDownText;
    public float SlowMoDur = 3f;
    public float SlowAmount = 0.5f;
    public float LerpSpeed = 0.5f;
    public GameObject TimeOverlay;
    public float OverlayMaxA = 0.8f;
    public float OverlayMinA = 0f;

    private float baseDuration;
    private float coolDownLeft = 0;
    private Image imgRender;
    private bool slowMoEnabled = false;
    private float startingSpeed;
    private float lerp = 1;
    private Image overlay;
    private Color overlayColor = Color.white;

    //AudioStuff
    //TODO: Use www to make streamingAssets audioclips... (Lowers App Size, ANA DOCS)
    private int fileId;
    private int streamId;
    

    // Use this for initialization
    void Start()
    {
        fileId = GameController.Instance.ANALoadAudio("Slowmo.wav");
        baseDuration = SlowMoDur;
        imgRender = GetComponent<Image>();
        overlay = TimeOverlay.GetComponent<Image>();
        overlayColor.a = 0f;
        if (2 / LerpSpeed > baseDuration)
        {
            LerpSpeed = 2 / baseDuration;
            Debug.Log("WOLF1337 LerpSpeed is too high on SlowTimeScript, auto coreccting...");
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha2))
            ButtonClicked("Alpa Key 2");

        if (coolDownLeft < 0)
            coolDownLeft = 0;
        if (coolDownLeft == 0 && CountDownText.IsActive())
            CountDownText.gameObject.SetActive(false);
        if (coolDownLeft > 0)
        {
            if (!CountDownText.IsActive())
                CountDownText.gameObject.SetActive(true);
            coolDownLeft -= Time.deltaTime;
            imgRender.fillAmount = Mathf.Clamp(1 - coolDownLeft / Cooldown, 0, 1);
            CountDownText.text = coolDownLeft.ToString("0.0");
        }
        if (slowMoEnabled)
        {
            SlowMoDur -= Time.deltaTime;
            overlay.color = overlayColor;
            if (SlowMoDur >= baseDuration - (1 / LerpSpeed))
            {
                lerp = (SlowMoDur - (baseDuration - (1 / LerpSpeed))) / (1 / LerpSpeed);
                GameController.Instance.GameMovSpeed = Mathf.Lerp(startingSpeed * SlowAmount, startingSpeed, lerp);
                overlayColor.a = Mathf.Lerp(OverlayMinA, OverlayMaxA, 1 - lerp);
            }
            else
            {
                GameController.Instance.GameMovSpeed = startingSpeed * SlowAmount;
                overlayColor.a = OverlayMaxA;
                lerp = 0;
            }
            if (lerp < 0)
                lerp = 0;
            if (SlowMoDur <= 1 / LerpSpeed)
            {
                lerp = ((1/LerpSpeed) - SlowMoDur) / (1/LerpSpeed);
                GameController.Instance.GameMovSpeed = Mathf.Lerp(startingSpeed * SlowAmount, startingSpeed, lerp);
                overlayColor.a = Mathf.Lerp(OverlayMinA, OverlayMaxA, 1 - lerp);
            }
            if (lerp > 1)
                lerp = 1;
            if (SlowMoDur <= 0)
            {
                GameController.Instance.AbilityInUse = false;
                slowMoEnabled = false;
                TimeOverlay.SetActive(false);
                lerp = 1;
                GameController.Instance.DontAddToSpeed = false;
                SlowMoDur = baseDuration;
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
            slowMoEnabled = true;
            GameController.Instance.DontAddToSpeed = true;
            startingSpeed = GameController.Instance.GameMovSpeed;
            TimeOverlay.SetActive(true);
            coolDownLeft = Cooldown;
        }
        Debug.Log(ok);
    }
}
