using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MuteSettings : MonoBehaviour
{
    public GameObject MainCamera;
    public GameObject MusicObject;
    public GameObject FXObject;

    private Image MusicImage;
    private Image FXImage;

    public Sprite fx;
    public Sprite music;
    public Sprite fxCanceled;
    public Sprite musicCanceled;

    private bool musicMuted = false;
    private bool fxMuted = false;

    void Start()
    {
        MusicImage = MusicObject.GetComponent<Image>();
        FXImage = FXObject.GetComponent<Image>();

        if(!PlayerPrefs.HasKey("MusicMuted"))
            PlayerPrefs.SetInt("MusicMuted", 0);
        if (!PlayerPrefs.HasKey("FXMuted"))
            PlayerPrefs.SetInt("FXMuted", 0);
        if (PlayerPrefs.GetInt("MusicMuted") == 1)
        {
            MusicImage.sprite = musicCanceled;
            MainCamera.GetComponent<AudioSource>().mute = true;
        }
        if (PlayerPrefs.GetInt("FXMuted") == 1)
            FXImage.sprite = fxCanceled;
        PlayerPrefs.Save();
    }

    public void OnMusicClick()
    {
        if (PlayerPrefs.GetInt("MusicMuted") == 0)
        {
            PlayerPrefs.SetInt("MusicMuted", 1);
            MainCamera.GetComponent<AudioSource>().mute = true;
            MusicImage.sprite = musicCanceled;
        }
        else
        {
            PlayerPrefs.SetInt("MusicMuted", 0);
            MainCamera.GetComponent<AudioSource>().mute = false;
            MusicImage.sprite = music;
        }
        PlayerPrefs.Save();
    }
    public void OnFXClick()
    {
        if (PlayerPrefs.GetInt("FXMuted") == 0)
        {
            PlayerPrefs.SetInt("FXMuted", 1);
            FXImage.sprite = fxCanceled;
        }
        else
        {
            PlayerPrefs.SetInt("FXMuted", 0);
            FXImage.sprite = fx;
        }
        PlayerPrefs.Save();
    }
}
