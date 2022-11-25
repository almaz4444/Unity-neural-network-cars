using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public GameObject networkElementPrefab;
    public GameObject loadingPanel;
    public Toggle traningToggle;
    public Transform scrollNetworkPanel;
    public Transform addNetworkButton;
    public AddNN addNeuralNetworkPanel;
    public Button[] buttons;

    public static string selectedNetworkName;
    public static int networksCount;
    public static List<string> namesNN;
    public static List<GameObject> networksList;
    private GameObject deleteAcceptPanel;
    
    public int[] layers = new int[3] { 5, 3, 2 };
    private float[][] neurons;
    private float[][] biases;
    private float[][][] weights;
    
    private void Start()
    {
        selectedNetworkName = null;
        networksCount = 1;
        namesNN = new List<string>();
        networksList = new List<GameObject>();

        if(!PlayerPrefs.HasKey("BASE_BOT_NN_NAME")) PlayerPrefs.SetString("BASE_BOT_NN_NAME", "Базовый");

        GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
        net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        networksList.Add(net);
        namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));

        for (int i = 0; i <= 10; i++)
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

        addNetworkButton.parent = null;
        addNetworkButton.parent = scrollNetworkPanel;

        InitNeurons();
        InitBiases();
        InitWeights();
    }

    private void Update()
    {
        if(selectedNetworkName == null)
        {
            foreach (Button button in buttons) button.interactable = false;
            traningToggle.interactable = false;
        }
        else if(selectedNetworkName != "Базовый")
        {
            foreach (Button button in buttons) button.interactable = true;
            traningToggle.interactable = true;
        }
        else
        {
            buttons[0].interactable = false;
            for (int i = 1; i < buttons.Length; i++) buttons[i].interactable = true;
            traningToggle.interactable = false;
            traningToggle.isOn = false;
        }
    }

    private void InitNeurons()
    {
        List<float[]> neuronsList = new List<float[]>();
        for (int i = 0; i < layers.Length; i++)
        {
            neuronsList.Add(new float[layers[i]]);
        }
        neurons = neuronsList.ToArray();
    }

    private void InitBiases()
    {
        List<float[]> biasList = new List<float[]>();
        for (int i = 0; i < layers.Length; i++)
        {
            float[] bias = new float[layers[i]];
            for (int j = 0; j < layers[i]; j++)
            {
                bias[j] = UnityEngine.Random.Range(-0.5f, 0.5f);
            }
            biasList.Add(bias);
        }
        biases = biasList.ToArray();
    }

    private void InitWeights()
    {
        List<float[][]> weightsList = new List<float[][]>();
        for (int i = 1; i < layers.Length; i++)
        {
            List<float[]> layerWeightsList = new List<float[]>();
            int neuronsInPreviousLayer = layers[i - 1];
            for (int j = 0; j < neurons[i].Length; j++)
            {
                float[] neuronWeights = new float[neuronsInPreviousLayer];
                for (int k = 0; k < neuronsInPreviousLayer; k++)
                {
                    neuronWeights[k] = UnityEngine.Random.Range(-0.5f, 0.5f);
                }
                layerWeightsList.Add(neuronWeights);
            }
            weightsList.Add(layerWeightsList.ToArray());
        }
        weights = weightsList.ToArray();
    }

    public void Play()
    {
        if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
        else PlayerPrefs.SetInt("TRANING", 0);
        PlayerPrefs.SetString("SELECTED_BOT_NN", selectedNetworkName);

        loadingPanel.SetActive(true);
        SceneTransition.SwitchToScene("Game");
    }

    public void AddNewNetwork()
    {
        if(PlayerPrefs.GetString("DONATE") == "default" && networksCount <= 5)
        {
            addNeuralNetworkPanel.Open();
        }
    }

    public void RenameNeuralNetwork(InputField name)
    {
        PlayerPrefs.SetString(InterSceneScript.GetPathWithNetworkName(selectedNetworkName), name.text);
        for (int i = 0; i < networksList.Count; i++)
        {
            if(networksList[i].GetComponent<NeuralNetworkElement>().text.text == selectedNetworkName)
            {
                networksList[i].GetComponent<NeuralNetworkElement>().text.text = name.text;
                selectedNetworkName = name.text;
                namesNN[i] = name.text;
            }
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

    public void SaveInputNetwork(string network)
    {
        string path = (networksCount + 1).ToString() + "_BOT_NN";
        string neuralNetworkName = "Нейросеть " + (networksCount + 1).ToString();

        bool isAllow = true;

        for (int i = 0; i < namesNN.Count; i++)
        {
            if(namesNN[i] == neuralNetworkName) neuralNetworkName = "Нейросеть " + (networksCount + i).ToString();
        }
        
        SaveToPlayerPrefs(path, network);
        
        GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
        net.GetComponent<NeuralNetworkElement>().text.text = neuralNetworkName;
        networksList.Add(net);
        namesNN.Add(PlayerPrefs.GetString(neuralNetworkName));

        PlayerPrefs.SetString((networksCount + 1).ToString() + "_BOT_NN_NAME", neuralNetworkName);
        networksCount++;
        
        addNetworkButton.parent = null;
        addNetworkButton.parent = scrollNetworkPanel;
    }

    private void Save(string path)
    {
        print(path);
        PlayerPrefs.DeleteAll();
        int lineNum = 0;

        for (int i = 0; i < biases.Length; i++)
        {
            for (int j = 0; j < biases[i].Length; j++)
            {
                PlayerPrefs.SetString(path + "_" + lineNum.ToString(), biases[i][j].ToString());
                lineNum++;
            }
        }

        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    PlayerPrefs.SetString(path + "_" + lineNum.ToString(), weights[i][j][k].ToString());
                    lineNum++;
                }
            }
        }
    }

    private void SaveToPlayerPrefs(string path, string preTrainedNetwork)
    {
        int NumberOfLines = preTrainedNetwork.Split(new char[] { '\n' }).Length - 1;
        string[] ListLines = new string[NumberOfLines];
        int index = 0;
        for (int i = 0; i < NumberOfLines; i++)
        {
            ListLines[i] = preTrainedNetwork.Split(new char[] { '\n' })[i];
        }
        if (NumberOfLines > 0)
        {
            for (int i = 0; i < biases.Length; i++)
            {
                for (int j = 0; j < biases[i].Length; j++)
                {
                    biases[i][j] = float.Parse(ListLines[index]);
                    index++;
                }
            }

            for (int i = 0; i < weights.Length; i++)
            {
                for (int j = 0; j < weights[i].Length; j++)
                {
                    for (int k = 0; k < weights[i][j].Length; k++)
                    {
                        weights[i][j][k] = float.Parse(ListLines[index]);
                        index++;
                    }
                }
            }
        }
        Save(path);
    }

    public void DeleteNetwork(GameObject deleteAcceptPanel)
    {
        deleteAcceptPanel.SetActive(true);
        this.deleteAcceptPanel = deleteAcceptPanel;
    }

    public void SelectNetworkNameToNull()
    {
        selectedNetworkName = null;
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

                    string path = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
                    
                    PlayerPrefs.DeleteKey(path + "_NAME");

                    int num = 0;
                    while (true)
                    {
                        if(PlayerPrefs.HasKey(path + "_" + num.ToString())) PlayerPrefs.DeleteKey(path + "_" + i.ToString());
                        else break;
                        num++;
                    }
                    
                    networksCount--;
                    selectedNetworkName = null;
                }
            }
        }
    }

    public void ShareNetwork()
    {
        StartCoroutine(ShareMessage());
    }

    private IEnumerator ShareMessage()
    {
        yield return new WaitForEndOfFrame();

        string path = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
        string neuralNetworkString = LoadAndReturnNeuralNetwork(path);
        print(neuralNetworkString);
        
        if(neuralNetworkString != "") new NativeShare().SetSubject("Моя нейронная сеть.").SetText(neuralNetworkString).Share();
    }

    private string LoadAndReturnNeuralNetwork(string path)
    {
        string neuralNetworkString = new string("");

        int i = 0;
        while (true)
        {
            if(PlayerPrefs.HasKey(path + "_" + i.ToString()))
            {
                neuralNetworkString += PlayerPrefs.GetString(path + "_" + i.ToString()) + "\n";
                i++;
            }
            else break;
        }
        return neuralNetworkString;
    }
}
