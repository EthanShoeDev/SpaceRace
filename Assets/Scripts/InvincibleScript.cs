using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InvincibleScript : MonoBehaviour {

    public float Cooldown = 4f;
    public Text CountDownText;
    public float InvinDur = 3f;
    public float SpriteCycleSpeed = 0.3f;
    public List<Sprite> SpritesList;

    private int lastIndexUsed;
    private float baseDuration;
    private float baseCycleSpeed;
    private float coolDownLeft = 0;
    private Image imgRender;
    private bool invinEnabled = false;
    private SpriteRenderer playerShipSpriteRend;
    private Sprite orginalSprite;

    //Audio Stuff
    private int fileId;
    private int streamId;

    // Use this for initialization
    void Start()
    {
        fileId = GameController.Instance.ANALoadAudio("Invin.wav");
        baseDuration = InvinDur;
        baseCycleSpeed = SpriteCycleSpeed;
        imgRender = GetComponent<Image>();
        playerShipSpriteRend = GameObject.Find("PlayerShip").GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha3))
            ButtonClicked("Alpa Key 3");

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
        if (GameController.Instance.InvinEnabled)
        {
            SpriteCycleSpeed -= Time.deltaTime;
            if (SpriteCycleSpeed <= 0)
            {
                playerShipSpriteRend.sprite = SpritesList[lastIndexUsed];
                lastIndexUsed++;
                if (lastIndexUsed > SpritesList.Count-1)
                    lastIndexUsed = 0;
                SpriteCycleSpeed = baseCycleSpeed;
            }
            InvinDur -= Time.deltaTime;
            if (InvinDur <= 0)
            {
                playerShipSpriteRend.sprite = orginalSprite;
                GameController.Instance.InvinEnabled = false;
                GameController.Instance.GodMode = false;
                InvinDur = baseDuration;
            }
        }
    }

    public void ButtonClicked(string ok)
    {
        if (coolDownLeft == 0 && !GameController.Instance.GameOver)
        {
            if (!GameController.Instance.FXMuted)
            {
                if (Application.platform == RuntimePlatform.Android)
                    streamId = AndroidNativeAudio.play(fileId);
                else
                    GetComponent<AudioSource>().Play();
            }
            GameController.Instance.InvinEnabled = true;
            GameController.Instance.GodMode = true;
            orginalSprite = playerShipSpriteRend.sprite;
            SpriteCycleSpeed = 0;
            coolDownLeft = Cooldown;
        }
        Debug.Log(ok);
    }
}
