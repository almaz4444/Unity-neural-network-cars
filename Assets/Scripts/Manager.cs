using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using Cinemachine;

public class Manager : MonoBehaviour
{
    // public const string BASE_BOT_NN = "BASE_BOT_NN";
    public const string BASE_BOT_NN = "Assets/Save.txt";
        
    public bool training;
    public bool isRotatePlatforms;
    public float timeFrame = 20;
    public int populationSize;
    public GameObject[] prefabs;
    public Transform[] spawnPoints;
    public Transform[] platforms;
    public GameObject[] checkPoints1;
    public GameObject[] checkPoints2;
    public GameObject[] checkPoints3;
    public GameObject[] checkPoints4;
    public CinemachineVirtualCamera vCam;
    public Toggle traningToggle;

    public int[] layers = new int[3] { 5, 3, 2 };

    [Range(0.0001f, 1f)] public float MutationChance = 0.01f;

    [Range(0f, 1f)] public float MutationStrength = 0.5f;

    [Range(0.1f, 50f)] public float Gamespeed = 1f;

    public List<NeuralNetwork> networks;
    private List<Bot> bots;
    private int followingBot = 0;

    private void Start()
    {
        InitNetworks();
        if (training) InvokeRepeating("CreateBots", 0.1f, timeFrame);
        else CreateBots();
    }

    private void Update()
    {
        if(training == false)
        {
            for (int i = 0; i < bots.Count; i++)
            {
                if(bots[i].stop)
                {
                    GameObject.Destroy(bots[i].gameObject);
                    bots.RemoveAt(i);

                    Bot bot = (Instantiate(prefabs[i], spawnPoints[i])).GetComponent<Bot>();
                    bot.network = networks[i];
                    if(i == 0) bot.checkPoints = checkPoints1;
                    if(i == 1) bot.checkPoints = checkPoints2;
                    if(i == 2) bot.checkPoints = checkPoints3;
                    if(i == 3) bot.checkPoints = checkPoints4;
                    bots.Add(bot);
                    RotatePlatform();
                    
                    vCam.Follow = bots[followingBot].transform;
                    vCam.LookAt = bots[followingBot].transform;
                }
            }
        }
    }

    public void InitNetworks()
    {
        networks = new List<NeuralNetwork>();
        for (int i = 0; i < populationSize; i++)
        {
            NeuralNetwork net = new NeuralNetwork(layers);
            net.Load(BASE_BOT_NN);
            networks.Add(net);
        }
    }

    public void CreateBots()
    {
        Time.timeScale = Gamespeed;

        if (bots != null)
        {
            for (int i = 0; i < bots.Count; i++)
            {
                GameObject.Destroy(bots[i].gameObject);
            }

            SortNetworks();
        }

        bots = new List<Bot>();
        for (int i = 0; i < populationSize; i++)
        {
            if(i == prefabs.Length - 1) i = 0;

            Bot bot = (Instantiate(prefabs[i], spawnPoints[i])).GetComponent<Bot>();
            bot.network = networks[i];
            if(i == 0) bot.checkPoints = checkPoints1;
            if(i == 1) bot.checkPoints = checkPoints2;
            if(i == 2) bot.checkPoints = checkPoints3;
            if(i == 3) bot.checkPoints = checkPoints4;
            bots.Add(bot);
        }
        RotatePlatform();
        
        vCam.Follow = bots[followingBot].transform;
        vCam.LookAt = bots[followingBot].transform;
    }

    public void SortNetworks()
    {
        for (int i = 0; i < populationSize; i++)
        {
            bots[i].UpdateFitness();
        }
        networks.Sort();
        networks[populationSize - 1].Save(BASE_BOT_NN);
        for (int i = 0; i < populationSize / 2; i++)
        {
            networks[i] = networks[i + populationSize / 2].copy(new NeuralNetwork(layers));
            networks[i].Mutate((int)(1/MutationChance), MutationStrength);
        }
    }

    public void RotatePlatform()
    {
        if(isRotatePlatforms)
        {
            for (int i = 0; i < platforms.Length; i++)
            {
                if(platforms[i].localScale.z > 0) platforms[i].localScale = new Vector3(platforms[i].localScale.x, platforms[i].localScale.y, -platforms[i].localScale.z);
                else platforms[i].localScale = new Vector3(platforms[i].localScale.x, platforms[i].localScale.y, Mathf.Abs(platforms[i].localScale.z));
            }
        }
    }

    public void FollowBot(int where)
    {
        if (followingBot < populationSize - 1 && where > 0) followingBot += where;
        else followingBot = 0;
        
        vCam.Follow = bots[followingBot].transform;
        vCam.LookAt = bots[followingBot].transform;
    }
}
