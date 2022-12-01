using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    [TextArea] public string preTrainedNetwork;
    public int maxNeuralNetworksCount;

    public GameObject networkElementPrefab;
    public GameObject loadingPanel;
    public Toggle traningToggle;
    public Transform scrollNetworkPanel;
    public Transform addNetworkButton;
    public ErrorPanel errorPanel;
    public Button[] buttons;

    public int[] layers = new int[3] { 4, 3, 2 };

    public static string selectedNetworkName;
    public static int networksCount;
    public static List<string> namesNN;
    public static List<GameObject> networksList;

    
    private void Start()
    {
        InterSceneScript.InitNetwork(layers);
        InterSceneScript.maxNeuralNetworksCount = maxNeuralNetworksCount;

        selectedNetworkName = null;
        networksCount = 1;
        namesNN = new List<string>();
        networksList = new List<GameObject>();

        if(!PlayerPrefs.HasKey("BASE_BOT_NN_NAME") || PlayerPrefs.HasKey("BASE_BOT_NN_0"))
        {
            PlayerPrefs.SetString("BASE_BOT_NN_NAME", "Базовый");
            InterSceneScript.SaveToPlayerPrefs("BASE_BOT_NN", preTrainedNetwork);
        }

        GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
        net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        networksList.Add(net);
        namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));

        for (int i = 0; i < InterSceneScript.maxNeuralNetworksCount + 1; i++)
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
    }

    private void Update()
    {
        if(Input.GetKey(KeyCode.Escape)) Application.Quit();

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

    public void Play()
    {
        if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
        else PlayerPrefs.SetInt("TRANING", 0);
        PlayerPrefs.SetString("SELECTED_BOT_NN", selectedNetworkName);

        loadingPanel.SetActive(true);
        SceneTransition.SwitchToScene("Game");
    }

    public void RenameNeuralNetwork(InputField name)
    {
        PlayerPrefs.SetString(InterSceneScript.GetPathWithNetworkName(selectedNetworkName) + "_NAME", name.text.ToString());
        
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

    public void CopyNeuralNetwork()
    {
        if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
        {
            string pathCopingNetwork = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
            string pathCopedNetwork = (networksCount - 1).ToString() + "_BOT_NN";
            string name = selectedNetworkName + " (копия)";

            int i = 0;
            while (true)
            {
                if(PlayerPrefs.HasKey(pathCopingNetwork + "_" + i)) PlayerPrefs.SetString(pathCopedNetwork + "_" + i.ToString(), PlayerPrefs.GetString(pathCopingNetwork + "_" + i));
                else break;
                i++;
            }

            PlayerPrefs.SetString(pathCopedNetwork + "_NAME", name);

            GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
            net.GetComponent<NeuralNetworkElement>().text.text = name;
            networksList.Add(net);
            namesNN.Add(PlayerPrefs.GetString(name));
            networksCount++;
            
            addNetworkButton.parent = null;
            addNetworkButton.parent = scrollNetworkPanel;
            selectedNetworkName = name;
        }
        else errorPanel.OpenErrorPanel("Превышен лимит дополнительных нейросетей (" + maxNeuralNetworksCount.ToString() + ")!");
    }

    public void SaveNewNetwork(string name)
    {
        if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
        {
            bool isAllow = true;

            foreach (string nameNN in namesNN)
            {
                if(nameNN == name) isAllow = false;
            }

            if(isAllow)
            {              
                PlayerPrefs.SetString((networksCount - 1).ToString() + "_BOT_NN_NAME", name);

                GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
                net.GetComponent<NeuralNetworkElement>().text.text = name;
                networksList.Add(net);
                namesNN.Add(name);
                networksCount++;

                addNetworkButton.parent = null;
                addNetworkButton.parent = scrollNetworkPanel;
            }
            else errorPanel.OpenErrorPanel("Нейросеть с данным названием уже существует!\nПридумайте другое название.");
        }
        else errorPanel.OpenErrorPanel("Превышен лимит дополнительных нейросетей (" + maxNeuralNetworksCount.ToString() + ")!");
    }

    public void SaveInputNetwork(string network)
    {
        if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
        {
            print(network.Split("\n\n").Length);
            if(network.Split("\n\n").Length >= 3)
            {
                string path = (networksCount - 1).ToString() + "_BOT_NN";
                string neuralNetworkName = network.Split("\n\n")[0];
                PlayerPrefs.SetInt(path + "_STEPS", int.Parse(network.Split("\n\n")[1]));

                foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "Нейосеть " + (networksCount + 1).ToString();
                
                try { InterSceneScript.SaveToPlayerPrefs(path, network.Split("\n\n")[2] + "\n"); }
                catch
                {
                    errorPanel.OpenErrorPanel("Похоже вы ввели не модель нейросети, проверьте её и попробуйте ещё раз.");
                    return;
                }
                
                GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
                net.GetComponent<NeuralNetworkElement>().text.text = neuralNetworkName;
                networksList.Add(net);
                namesNN.Add(PlayerPrefs.GetString(neuralNetworkName));

                PlayerPrefs.SetString((networksCount - 1).ToString() + "_BOT_NN_NAME", neuralNetworkName);
                networksCount++;
                
                addNetworkButton.parent = null;
                addNetworkButton.parent = scrollNetworkPanel;
            }
            else errorPanel.OpenErrorPanel("Модель не распознана!");
        }
        else errorPanel.OpenErrorPanel("Превышен лимит дополнительных нейросетей (" + maxNeuralNetworksCount.ToString() + ")!");
    }

    public void SelectNetworkNameToNull()
    {
        selectedNetworkName = null;
    }

    public void DeleteNetworkAccepting(bool isDelete)
    {
        if(isDelete) InterSceneScript.DeleteNetwork(InterSceneScript.GetPathWithNetworkName(selectedNetworkName));
    }

    public void ShareNetwork()
    {
        StartCoroutine(ShareMessage());
    }

    private IEnumerator ShareMessage()
    {
        yield return new WaitForEndOfFrame();

        string path = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
        string neuralNetworkString = PlayerPrefs.GetString(path + "_NAME") + "\n\n" + PlayerPrefs.GetInt(path + "_STEPS") + "\n\n" + LoadAndReturnNeuralNetwork(path);
        
        print(neuralNetworkString);
        if(neuralNetworkString != "") new NativeShare().SetSubject("Моя нейронная сеть.").SetText(neuralNetworkString).Share();
        else errorPanel.OpenErrorPanel("Невозможно отправить пустую модель!\nОбучите её и попробуйте снова.");
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

    public void DeleteAll()
    {
        for (int i = 0; i < networksList.Count; i++)
        {
            Destroy(networksList[i]);
        }

        PlayerPrefs.DeleteAll();
        namesNN = new List<string>();
        networksList = new List<GameObject>();
        selectedNetworkName = null;
        networksCount = 1;

        PlayerPrefs.SetString("BASE_BOT_NN_NAME", "Базовый");
        InterSceneScript.SaveToPlayerPrefs("BASE_BOT_NN", preTrainedNetwork);
        GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
        net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
        networksList.Add(net);
        namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));

        addNetworkButton.parent = null;
        addNetworkButton.parent = scrollNetworkPanel;
    }
}