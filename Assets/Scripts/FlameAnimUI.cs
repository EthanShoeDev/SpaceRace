using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FlameAnimUI : MonoBehaviour {

    public List<Sprite> SpriteList;
    public int StartingIndex = 0;
    public float CycleTime = 0.2f;

    private float baseCycleTime;
    private Image spriteRender;

    // Use this for initialization
    void Start()
    {
        baseCycleTime = CycleTime;
        spriteRender = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (CycleTime <= 0)
        {
            StartingIndex++;
            if (StartingIndex > SpriteList.Count - 1)
                StartingIndex = 0;
            spriteRender.sprite = SpriteList[StartingIndex];
            CycleTime = baseCycleTime;
        }
        CycleTime -= Time.deltaTime;
    }
}

