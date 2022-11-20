using System.Collections.Generic;
using System;
using System.IO;
using UnityEngine;

public class NeuralNetwork : MonoBehaviour, IComparable<NeuralNetwork>
{
    private int[] layers;
    private float[][] neurons;
    private float[][] biases;
    private float[][][] weights;
    private int[] activations;

    public float fitness = 0;

    public NeuralNetwork(int[] layers)
    {
        this.layers = new int[layers.Length];
        for (int i = 0; i < layers.Length; i++)
        {
            this.layers[i] = layers[i];
        }
        InitNeurons();
        InitBiases();
        InitWeights();
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

    public float[] FeedForward(float[] inputs)
    {
        for (int i = 0; i < inputs.Length; i++)
        {
            neurons[0][i] = inputs[i];
        }
        for (int i = 1; i < layers.Length; i++)
        {
            int layer = i - 1;
            for (int j = 0; j < neurons[i].Length; j++)
            {
                float value = 0f;
                for (int k = 0; k < neurons[i - 1].Length; k++)
                {
                    value += weights[i - 1][j][k] * neurons[i - 1][k];
                }
                neurons[i][j] = activate(value + biases[i][j]);
            }
        }
        return neurons[neurons.Length - 1];
    }

    public float activate(float value)
    {
        return (float)Math.Tanh(value);
    }

    public void Mutate(int chance, float val)
    {
        for (int i = 0; i < biases.Length; i++)
        {
            for (int j = 0; j < biases[i].Length; j++)
            {
                biases[i][j] = (UnityEngine.Random.Range(0f, chance) <= 5) ? biases[i][j] += UnityEngine.Random.Range(-val, val) : biases[i][j];
            }
        }

        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    weights[i][j][k] = (UnityEngine.Random.Range(0f, chance) <= 5) ? weights[i][j][k] += UnityEngine.Random.Range(-val, val) : weights[i][j][k];
                }
            }
        }
    }

    public int CompareTo(NeuralNetwork other)
    {
        if (other == null) return 1;

        if (fitness > other.fitness)
            return 1;
        else if (fitness < other.fitness)
            return -1;
        else
            return 0;
    }

    public NeuralNetwork copy(NeuralNetwork nn)
    {
        for (int i = 0; i < biases.Length; i++)
        {
            for (int j = 0; j < biases[i].Length; j++)
            {
                nn.biases[i][j] = biases[i][j];
            }
        }
        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    nn.weights[i][j][k] = weights[i][j][k];
                }
            }
        }
        return nn;
    }

    public void Load(string path)
    {
        int NumberOfLines = 0;
        int index = 0;
        while (true)
        {
            if(PlayerPrefs.HasKey(path + "_" + NumberOfLines.ToString())) NumberOfLines++;
            else break;
        }
        string[] ListLines = new string[NumberOfLines];
        for (int i = 0; i < NumberOfLines; i++)
        {
            ListLines[i] = PlayerPrefs.GetString(path + "_" + i.ToString()).ToString();
        }
        Debug.Log((NumberOfLines, ListLines));
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
                        weights[i][j][k] = float.Parse(ListLines[index]); ;
                        index++;
                    }
                }
            }
        }
        
        // TextReader tr = new StreamReader(path);
        // int NumberOfLines = (int)new FileInfo(path).Length;
        // string[] ListLines = new string[NumberOfLines];
        // int index = 1;
        // for (int i = 1; i < NumberOfLines; i++)
        // {
        //     ListLines[i] = tr.ReadLine();
        // }
        // tr.Close();
        // if (new FileInfo(path).Length > 0)
        // {
        //     for (int i = 0; i < biases.Length; i++)
        //     {
        //         for (int j = 0; j < biases[i].Length; j++)
        //         {
        //             biases[i][j] = float.Parse(ListLines[index]);
        //             index++;
        //         }
        //     }

        //     for (int i = 0; i < weights.Length; i++)
        //     {
        //         for (int j = 0; j < weights[i].Length; j++)
        //         {
        //             for (int k = 0; k < weights[i][j].Length; k++)
        //             {
        //                 weights[i][j][k] = float.Parse(ListLines[index]); ;
        //                 index++;
        //             }
        //         }
        //     }
        // }
    }

    public void Save(string path)
    {
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
        
        // File.Create(path).Close();
        // StreamWriter writer = new StreamWriter(path, true);

        // for (int i = 0; i < biases.Length; i++)
        // {
        //     for (int j = 0; j < biases[i].Length; j++)
        //     {
        //         writer.WriteLine(biases[i][j]);
        //     }
        // }

        // for (int i = 0; i < weights.Length; i++)
        // {
        //     for (int j = 0; j < weights[i].Length; j++)
        //     {
        //         for (int k = 0; k < weights[i][j].Length; k++)
        //         {
        //             writer.WriteLine(weights[i][j][k]);
        //         }
        //     }
        // }
        // writer.Close();
    }

    public void SaveToPlayerPrefs(string path)
    {
        TextReader tr = new StreamReader("Assets/Save.txt");
        int NumberOfLines = (int)new FileInfo("Assets/Save.txt").Length;
        string[] ListLines = new string[NumberOfLines];
        int index = 1;
        for (int i = 1; i < NumberOfLines; i++)
        {
            ListLines[i] = tr.ReadLine();
        }
        Debug.Log(NumberOfLines);
        tr.Close();
        if (new FileInfo("Assets/Save.txt").Length > 0)
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
                        weights[i][j][k] = float.Parse(ListLines[index]); ;
                        index++;
                    }
                }
            }
        }
        Save(path);
    }
}
