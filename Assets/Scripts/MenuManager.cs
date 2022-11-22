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
    public Button[] buttons;

    public static string selectedNetworkName;
    private int networksCount = 1;
    private List<string> namesNN = new List<string>();
    private List<GameObject> networksList = new List<GameObject>();
    private GameObject deleteAcceptPanel;
    
    private void Start()
    {
        selectedNetworkName = null;

        if(!PlayerPrefs.HasKey("BASE_BOT_NN_NAME")) PlayerPrefs.SetString("BASE_BOT_NN_NAME", "Базовый");

        GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
        net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        networksList.Add(net);
        namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));

        if(PlayerPrefs.HasKey("DONATE"))
        {
            if(PlayerPrefs.GetString("DONATE") == "default")
            {
                for (int i = 1; i <= 10; i++)
                {
                    if(PlayerPrefs.HasKey(i.ToString() + "_BOT_NN_NAME"))
                    {
                        net = Instantiate(networkElementPrefab, scrollNetworkPanel);
                        net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString(i + "_BOT_NN_NAME");
                        networksList.Add(net);
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

    private void Update()
    {
        if(selectedNetworkName == null) foreach (Button button in buttons) button.interactable = false;
        else foreach (Button button in buttons) button.interactable = true;
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

            GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
            net.GetComponent<NeuralNetworkElement>().text.text = name;
            networksList.Add(net);
            namesNN.Add(name);

            networksCount++;
            addNetworkButton.parent = null;
            addNetworkButton.parent = scrollNetworkPanel;
        }
    }

    public void DeleteNetwork(GameObject deleteAcceptPanel)
    {
        deleteAcceptPanel.SetActive(true);
        this.deleteAcceptPanel = deleteAcceptPanel;
    }

    public void DeleteNetworkAccepting(bool isDelete)
    {
        deleteAcceptPanel.SetActive(false);

        if(isDelete)
        {
            for (int i = 0; i < networksCount; i++)
            {
                if(selectedNetworkName == namesNN[i])
                {
                    Destroy(networksList[i]);
                    namesNN.RemoveAt(i);
                    networksList.RemoveAt(i);

                    for (int a = 0; a < 10; a++)
                    {
                        if(PlayerPrefs.HasKey(a.ToString() + "_BOT_NN_NAME"))
                        {
                            string botNNName = PlayerPrefs.GetString((a).ToString() + "_BOT_NN_NAME");
                            if(botNNName == selectedNetworkName) PlayerPrefs.DeleteKey(a.ToString() + "_BOT_NN_NAME");

                            string path = a.ToString() + "_BOT_NN";
                            int num = 0;
                            while (true)
                            {
                                if(PlayerPrefs.HasKey(path + "_" + num.ToString())) PlayerPrefs.DeleteKey(path + "_" + i.ToString());
                                else break;
                                num++;
                            }
                        }
                    }
                    
                    networksCount--;
                    selectedNetworkName = null;
                }
            }
        }
    }
}
