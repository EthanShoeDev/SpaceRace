using System.Collections;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using UnityEngine;

public class DestroyOnAnimFinish : MonoBehaviour
{

    void Start()
    {
        if (!GameController.Instance.FXMuted)
        {
            if (Application.platform == RuntimePlatform.Android)
                AndroidNativeAudio.play(GameController.Instance.ExplosionWavFileId);
            else
                GetComponent<AudioSource>().Play();
        }
    }

    public void DetroyAnimationObject()
    {
        GameController.Instance.AnimFinished = true;
        GameController.Instance.ShowAd();
        Destroy(gameObject);
    }

    
}
