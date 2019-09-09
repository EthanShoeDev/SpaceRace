using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml.Serialization;
using UnityEngine;
using Random = UnityEngine.Random;

public class EnemySpawner : MonoBehaviour
{
    public List<GameObject> EnemyTypes = new List<GameObject>();
    public float HorizontalSpawnPos = 15;

    private List<Level> lvls;
    private Dictionary<Color, int> color2prefabLookup = new Dictionary<Color, int>();

    private GameObject lastSpawnedObject;
	// Use this for initialization
	void Start ()
	{
        color2prefabLookup.Add(new Color(0, 0, 0, 255), 0);
	    color2prefabLookup.Add(new Color(255, 0, 0, 255), 1);
	    color2prefabLookup.Add(new Color(0, 255, 0, 255), 2);
	    color2prefabLookup.Add(new Color(0, 0, 255, 255), 3);
	    color2prefabLookup.Add(new Color(255, 0, 255, 255), 7);
        if (lvls == null)
            lvls = new List<Level>();
        //DirectoryInfo dir = new DirectoryInfo(LvlsPath);
        //FileInfo[] files = dir.GetFiles();
        //foreach (FileInfo file in files)
        //{
        //    if (file.Extension == ".xml")
        //    {
        //        lvls.Add(Level.Load(file.FullName));
        //    }
        //}
	    int i = 0;
	    while (true)
	    {
	        Level lvl = Level.Load("level" + i);
	        if (lvl != null)
	            lvls.Add(lvl);
	        else
	            break;
	        i++;
	    }
        SpawnLvl(2f);
	}
	
	// Update is called once per frame
	void Update ()
    {
		if(lastSpawnedObject != null && lastSpawnedObject.transform.position.x < HorizontalSpawnPos)
            SpawnLvl(HorizontalSpawnPos + 4);
	}

    void SpawnLvl(float xOffset)
    {
        lastSpawnedObject = null;
        int randIndex = Random.Range(0, lvls.Count);
        List<Pixel> PixelsList = lvls[randIndex].Pixels;
        Pixel lastpix = PixelsList[PixelsList.Count - 1];
        foreach (Pixel pix in PixelsList)
        {
            Color col = new Color(pix.Red, pix.Green, pix.Blue, pix.Alpha);
            if (!color2prefabLookup.ContainsKey(col))
                continue;
            Vector3 pos = new Vector3(pix.X + xOffset, 32 - pix.Y - 16, 0);
            GameObject obj = EnemyTypes[color2prefabLookup[col]];
            if(pix == lastpix)
                lastSpawnedObject = SimplePool.Spawn(obj, pos, Quaternion.identity, gameObject);
            else
                SimplePool.Spawn(obj, pos, Quaternion.identity, gameObject);
        }
        Debug.Log("WOLF1337 Spawned Level " + randIndex);
    }
}
