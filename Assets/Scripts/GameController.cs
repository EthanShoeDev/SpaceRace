using System;
using System.Collections;
using System.Collections.Generic;
using AppAdvisory.social;
using GoogleMobileAds.Api;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{

    public static GameController Instance;
    public float DefaultScrollSpeed = 3f;
    public float DefaultRotationSpeed = 10f;
    public Text ScoreText;
    public float SpeedMultiplier = 0.001f;
    public float ScoreMultipler = 50f;
    public float GameSpeedCap = 12f;
    public float AdFailedTimeout = 5f;
    public GameObject Fire;
    public GameObject GameOverMenu;
    public bool FXMuted = false;

    [HideInInspector] public bool AbilityInUse = false;
    [HideInInspector] public bool InvinEnabled = false;
    [HideInInspector] public float GameMovSpeed = 0;
    [HideInInspector] public bool GameOver = false;
    [HideInInspector] public bool IsGameStarted = false;
    [HideInInspector] public bool DontAddToSpeed = false;
    [HideInInspector] public bool GodMode = false;
    [HideInInspector] public bool AnimFinished = false;
    [HideInInspector] public int ExplosionWavFileId { protected set; get; }


    private InterstitialAd interstitial;
    private float Score = 0;
    private List<int> loadedFiles = new List<int>();
    private bool isAdClosed = false;
    private AudioSource bckGroundMusic;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else if(Instance != this)
            Destroy(gameObject);
        AndroidNativeAudio.makePool(5);
        ExplosionWavFileId = ANALoadAudio("explosion.wav");
    }

    public int ANALoadAudio(string audioFile)
    {
        int fileId = AndroidNativeAudio.load(audioFile);
        loadedFiles.Add(fileId);
        return fileId;
    }

    void OnApplicationQuit()
    {
        foreach (int fileId in loadedFiles)
        {
            AndroidNativeAudio.unload(fileId);
        }
        AndroidNativeAudio.releasePool();
        if(interstitial != null)
            interstitial.Destroy();
    }

	// Use this for initialization
	void Start () {
		interstitial = RequestInterstitial();
	    interstitial.OnAdClosed += OnAdClosed;
	    bckGroundMusic = GetComponent<AudioSource>();
	    if (PlayerPrefs.GetInt("FXMuted") == 1)
	        FXMuted = true;
	    if (PlayerPrefs.GetInt("MusicMuted") == 1)
	        GetComponent<AudioSource>().mute = true;
	}
	
	// Update is called once per frame
	void Update ()
	{
	    if (!IsGameStarted)
	    {
            Vector2 touchPos = Vector2.zero;
            if(!Application.isMobilePlatform)
	            touchPos = Input.mousePosition;
            else if (Input.touchCount > 0)
                touchPos = Input.touches[0].position;
	        if (touchPos != Vector2.zero && !IsMouseOffScreen())
	        {
	            Debug.Log("WOLF1337 Start Touch Cord: " + touchPos.x + ", " + touchPos.y);
	            IsGameStarted = true;
	            Fire.SetActive(true);
                GameMovSpeed = 1;
	        }
	        else
	        {
	            GameMovSpeed = 0;
            }
        }
	    else if(!GameOver) //Game is started and not over
	    {
	        AddSpeed();
	        Score += GameMovSpeed * ScoreMultipler * Time.deltaTime;
            if (ScoreText != null)
	            ScoreText.text = "Score: " + (int)Score;
        }
        else if(GameOver)
	    {
            if(bckGroundMusic.isPlaying)
                bckGroundMusic.Stop();
	        if (AnimFinished)
	        {
	            AdFailedTimeout -= Time.deltaTime;
	            if (AdFailedTimeout <= 0 && !GameOverMenu.activeSelf)
	            {
	                interstitial.Destroy();
	                isAdClosed = true;
	            }
            }
	        if (isAdClosed)
	        {
	            DisplayScores();
	            isAdClosed = false;
	        }
        }
	}

    public void ShowAd()
    {
        if (interstitial.IsLoaded())
            interstitial.Show();
        if (!Application.isMobilePlatform)
            isAdClosed = true;
    }

    public void OnAdClosed(object sender, EventArgs args)
    {
        isAdClosed = true;
    }

    public void DisplayScores()
    {
        GameOverMenu.SetActive(true);
        int score = (int) Score;
        GameObject.Find("FinalScore").GetComponent<Text>().text += score;
        int highscore;
        if (!PlayerPrefs.HasKey("HighScore"))
            highscore = 0;
        else
            highscore = PlayerPrefs.GetInt("HighScore");
        if (score > highscore)
        {
            highscore = score;
            LeaderboardManager.ReportScore(score);
        }
        GameObject.Find("HighScore").GetComponent<Text>().text += highscore;
        PlayerPrefs.SetInt("HighScore", highscore);
        PlayerPrefs.Save();
    }

    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public static bool IsMouseOffScreen()
    {
        if (Application.isMobilePlatform)
            return false;
        var mousePos = Input.mousePosition;
        if (mousePos.y > Screen.height || mousePos.y < 0 || mousePos.x > Screen.width ||
            mousePos.x < 0)
            return true;
        return false;
    }


    private void AddSpeed()
    {
        if (GameMovSpeed > GameSpeedCap && !AbilityInUse)
        {
            Debug.Log("WOLF1337 SPEED CAP HIT!!!!!");
            GameMovSpeed = GameSpeedCap;
        }
        else if (!AbilityInUse)
            GameMovSpeed += SpeedMultiplier * Time.deltaTime;
    }

    private InterstitialAd RequestInterstitial()
    {
        #if UNITY_ANDROID
            string adUnitId = "PRIVATE KEY";
        #elif UNITY_IPHONE
            string adUnitId = "PRIVATE KEY";
        #else
            string adUnitId = "unexpected_platform";
        #endif
        // Initialize an InterstitialAd.
        InterstitialAd intAD = new InterstitialAd(adUnitId);
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        intAD.LoadAd(request);
        return intAD;
    }

    public void ReturnToMain()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
