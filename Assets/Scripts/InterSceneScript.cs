using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterSceneScript : MonoBehaviour
{
    public static string GetPathWithNetworkName(string name)
    {
        string path = new string("");

        if(name == "Базовый") return "BASE_BOT_NN";

        for (int a = 0; a < 10; a++)
        {
            string botNNName = PlayerPrefs.GetString(a.ToString() + "_BOT_NN_NAME");
            if(botNNName == name) path = a.ToString() + "_BOT_NN";
        }

        return path;
    }

    public static void DeleteNetwork(string path)
    {
        for (int i = 0; i < MenuManager.networksCount; i++)
        {
            if(path == InterSceneScript.GetPathWithNetworkName(MenuManager.namesNN[i]))
            {
                Destroy(MenuManager.networksList[i]);
                MenuManager.namesNN.RemoveAt(i);
                MenuManager.networksList.RemoveAt(i);

                int num = 0;
                while (true)
                {
                    if(PlayerPrefs.HasKey(path + "_" + num.ToString())) PlayerPrefs.DeleteKey(path + "_" + i.ToString());
                    else break;
                    num++;
                }
                
                MenuManager.networksCount--;
            }
        }
    }
}
