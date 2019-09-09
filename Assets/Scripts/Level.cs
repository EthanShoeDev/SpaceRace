using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using UnityEngine;
using System.Xml.Serialization;


[XmlRoot("Level")]
public class Level
{
    [XmlArray("Pixels")]
    [XmlArrayItem("Pixel")]
    public List<Pixel> Pixels = new List<Pixel>();

    public static Level Load(string path)
    {
        try
        {
            TextAsset xmlFile = (TextAsset)Resources.Load(path, typeof(TextAsset));
            var serializer = new XmlSerializer(typeof(Level));
            using (var reader = XmlReader.Create(new StringReader(xmlFile.text)))
            {
                return serializer.Deserialize(reader) as Level;
            }
        }
        catch (Exception)
        {
            Debug.Log("WOLF1337 DID NOT FIND " + path);
            return null;
        }
    }

}