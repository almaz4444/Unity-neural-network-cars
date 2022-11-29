using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterSceneScript : MonoBehaviour
{
    public static int maxNeuralNetworksCount;
    private static int[] layers;
    private static float[][] neurons;
    private static float[][] biases;
    private static float[][][] weights;


    public static void InitNetwork(int[] layers)
    {
        Bot.Awake(layers);
        InterSceneScript.layers = layers;

        InterSceneScript.InitNeurons();
        InterSceneScript.InitBiases();
        InterSceneScript.InitWeights();
    }

    private static void InitNeurons()
    {
        List<float[]> neuronsList = new List<float[]>();
        for (int i = 0; i < layers.Length; i++)
        {
            neuronsList.Add(new float[layers[i]]);
        }
        neurons = neuronsList.ToArray();
    }

    private static void InitBiases()
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

    private static void InitWeights()
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


    public static string GetPathWithNetworkName(string name)
    {
        string path = new string("");

        if(name == "Базовый") return "BASE_BOT_NN";

        for (int a = 0; a < maxNeuralNetworksCount; a++)
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
            try
            {
                if(path == GetPathWithNetworkName(MenuManager.namesNN[i]))
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
            catch
            {
                break;
            }
        }
    }
    

    private static void Save(string path)
    {
        if(MenuManager.namesNN != null) DeleteNetwork(path);
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

    public static void SaveToPlayerPrefs(string path, string preTrainedNetwork)
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
}
