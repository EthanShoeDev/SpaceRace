using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionOnTrigger : MonoBehaviour
{
    public GameObject ExplosionAnimation;

    private void OnTriggerEnter2D(Collider2D collider)
    {
        if (!GameController.Instance.GodMode)
        {
            Instantiate(ExplosionAnimation, transform.position, Quaternion.identity);
            GameController.Instance.GameOver = true;
            Destroy(gameObject);
        }
    }

    private void OnTriggerStay2D(Collider2D col)
    {
        OnTriggerEnter2D(col);
    }
}
