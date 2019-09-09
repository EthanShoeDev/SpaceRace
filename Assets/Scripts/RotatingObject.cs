using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatingObject : MonoBehaviour
{
    //If still at -1 use gamecontroll default
    public float RotationSpeed = -1;
    [Range(0.0f,1.0f)]
    public float Variation = 0.1f;
    public bool StartWithRandomRotation = false;

    private float baseRotationSpeed;

    void Start()
    {
        if (RotationSpeed == -1)
            baseRotationSpeed = GameController.Instance.DefaultRotationSpeed;
        RotationSpeed = baseRotationSpeed * (1 + Random.Range(-Variation, Variation));
        if (StartWithRandomRotation)
            transform.rotation = Quaternion.Euler(0, 0, Random.Range(-90f, 90f));
    }

    void OnEnable()
    {
        if (RotationSpeed == -1)
            baseRotationSpeed = GameController.Instance.DefaultRotationSpeed;
        RotationSpeed = baseRotationSpeed * (1+Random.Range(-Variation, Variation));
        if (StartWithRandomRotation)
            transform.rotation = Quaternion.Euler(0, 0, Random.Range(-90f, 90f));
    }

    // Update is called once per frame
    void Update ()
    {
	    transform.Rotate(new Vector3(0, 0, RotationSpeed*Time.deltaTime));
    }
}
