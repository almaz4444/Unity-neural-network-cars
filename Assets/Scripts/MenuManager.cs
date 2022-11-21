using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public GameObject networkElementPrefab;
    public Toggle traningToggle;
    public Transform scrollNetworkPanel;
    public Transform addNetworkButton;
    public AddNN addNeuralNetworkPanel;

    public static string selectedNetworkName;
    private int networksCount = 1;
    private List<string> namesNN = new List<string>();
    
    private void Start()
    {
        if(!PlayerPrefs.HasKey("BASE_BOT_NN_NAME")) PlayerPrefs.SetString("BASE_BOT_NN_NAME", "Базовый");
        selectedNetworkName = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        Instantiate(networkElementPrefab, scrollNetworkPanel).GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        namesNN.Add(selectedNetworkName);

        if(PlayerPrefs.HasKey("DONATE"))
        {
            if(PlayerPrefs.GetString("DONATE") == "default")
            {
                for (int i = 1; i <= 10; i++)
                {
                    if(PlayerPrefs.HasKey(i.ToString() + "_BOT_NN_NAME"))
                    {
                        Instantiate(networkElementPrefab, scrollNetworkPanel).GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString(i + "_BOT_NN_NAME");
                        namesNN.Add(PlayerPrefs.GetString(i + "_BOT_NN_NAME"));
                        networksCount++;
                    }
                }
            }
        }
        else PlayerPrefs.SetString("DONATE", "default");

        addNetworkButton.parent = null;
        addNetworkButton.parent = scrollNetworkPanel;
    }

    public void Play()
    {
        if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
        else PlayerPrefs.SetInt("TRANING", 0);
        PlayerPrefs.SetString("SELECTED_BOT_NN", selectedNetworkName);

        SceneManager.LoadScene("Game");
    }

    public void AddNewNetwork()
    {
        if(PlayerPrefs.GetString("DONATE") == "default" && networksCount <= 5)
        {
            addNeuralNetworkPanel.Open();
        }
        else
        {

        }
    }

    public void SaveNewNetwork(string name)
    {
        bool isAllow = true;

        foreach (string nameNN in namesNN)
        {
            if(nameNN == name) isAllow = false;
        }

        if(isAllow)
        {
            PlayerPrefs.SetString((networksCount + 1).ToString() + "_BOT_NN_NAME", name);
            Instantiate(networkElementPrefab, scrollNetworkPanel).GetComponent<NeuralNetworkElement>().text.text = name;
            namesNN.Add(name);
            networksCount++;
            
            addNetworkButton.parent = null;
            addNetworkButton.parent = scrollNetworkPanel;
        }
    }
}
