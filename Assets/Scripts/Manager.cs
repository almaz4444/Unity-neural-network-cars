﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;
using UnityEngine.UI;
using UnityEngine;
using Cinemachine;

public class Manager : MonoBehaviour
{
    public static bool training;
    public float timeFrame = 20;
    public int populationSize;
    public GameObject[] prefabs;
    public Transform[] spawnPoints;
    public GameObject vCam1;
    public GameObject vCam2;
    public GameObject vCam3;
    public Text numOfStepsText;
    public Text botFitnessText;

    public GameObject[] lights;
    public Joystick rotateWheelsBotJoystick; 

    public static int[] layers;

    public static float MutationChance;
    public static float MutationStrength;
    public static bool IsUpCamera = false;
    public static bool IsCarControl = false;

    public List<NeuralNetwork> networks = new List<NeuralNetwork>();
    public List<Bot> bots = new List<Bot>();
    private GameObject myCar;
    private int followingBot = 0;
    private bool isCameraFollowing = true;
    private string neuralNetworkName;
    private float oldTimeScale = 0;


    private void Start()
    {
        layers = Bot.layers;

        if(PlayerPrefs.GetInt("TRANING") == 0) training = false;
        else training = true;
        neuralNetworkName = PlayerPrefs.GetString("SELECTED_BOT_NN");

        InitNetworks();
        if (training) InvokeRepeating("CreateBots", 0, timeFrame);
        else CreateBots();

        string path = InterSceneScript.GetPathWithNetworkName(neuralNetworkName);
        if(!PlayerPrefs.HasKey(path + "_STEPS"))
        {
            if(neuralNetworkName == "Базовый") PlayerPrefs.SetInt("BASE_BOT_NN_STEPS", 25370);
            else PlayerPrefs.SetInt(path + "_STEPS", 0);
        }
    }

    private void Update()
    {
        if(Input.GetKey(KeyCode.Escape)) Application.Quit();
        if(training == false && bots != null)
        {
            for (int i = 0; i < bots.Count; i++)
            {
                if(bots[i].stop && bots[i].network != null)
                {
                    GameObject.Destroy(bots[i].gameObject);

                    Bot bot = (Instantiate(prefabs[i], spawnPoints[i]).GetComponent<Bot>());
                    bot.network = networks[i];
                    bots[i] = bot;
                    
                    if(!IsCarControl)
                    {
                        if(isCameraFollowing)
                        {
                            vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
                            vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
                        }
                        else
                        {
                            vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
                            vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
                        }
                    }
                }
            }
        }

        if(bots.Count != 0)
        {
            numOfStepsText.text = "Шагов: " + PlayerPrefs.GetInt(InterSceneScript.GetPathWithNetworkName(neuralNetworkName) + "_STEPS").ToString();
            botFitnessText.text = "Fitness: " + bots[followingBot].fitness.ToString();
        }

        if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
        else for (int i = 1; i < lights.Length; i++) lights[i].SetActive(true);
        
        if(IsUpCamera)
        {
            vCam1.SetActive(false);
            vCam2.SetActive(false);
            vCam3.SetActive(true);
        }
        else if(!IsCarControl)
        {
            vCam3.SetActive(false);

            if(isCameraFollowing)
            {
                vCam1.SetActive(true);
                vCam2.SetActive(false);
            }
            else
            {
                vCam1.SetActive(false);
                vCam2.SetActive(true);
            }
        }
        
        if(IsCarControl && myCar != null) myCar.GetComponent<RearWheelDrive>().horizontalAxis = rotateWheelsBotJoystick.Horizontal;
    }

    public void InitNetworks()
    {
        NeuralNetwork net = new NeuralNetwork(layers);
        net.Load(InterSceneScript.GetPathWithNetworkName(neuralNetworkName));

        for (int i = 0; i < populationSize; i++) 
        {
            networks.Add(net);
        }
    }

    public void CreateBots()
    {        
        if (bots.Count != 0)
        {
            for (int i = 0; i < bots.Count; i++)
            {
                try { GameObject.Destroy(bots[i].gameObject); }
                catch {  }
            }

            SortNetworks();

            bots = new List<Bot>();
            string path = InterSceneScript.GetPathWithNetworkName(neuralNetworkName) + "_STEPS";
            PlayerPrefs.SetInt(path, PlayerPrefs.GetInt(path) + 1);
        }
        
        for (int i = 0; i < populationSize; i++)
        {
            Bot bot = (Instantiate(prefabs[i], spawnPoints[i])).GetComponent<Bot>();
            bot.network = networks[i];
            bots.Add(bot);
        }

        if(!IsCarControl)
        {
            if(isCameraFollowing)
            {
                vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
                vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
            }
            else
            {
                vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
                vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
            }
        }
    }

    public void SortNetworks()
    {
        for (int i = 0; i < bots.Count; i++)
        {
            bots[i].UpdateFitness();
        }
        networks.Sort();
        networks[populationSize - 1].Save(InterSceneScript.GetPathWithNetworkName(neuralNetworkName));
        for (int i = 0; i < populationSize / 2; i++)
        {
            networks[i] = networks[i + populationSize / 2].copy(new NeuralNetwork(layers));
            networks[i].Mutate((int)(1/MutationChance), MutationStrength);
        }
    }

    public void FollowBot(int where)
    {
        if (followingBot < populationSize - 1 && followingBot > 0) followingBot += where;
        else if (followingBot == 0 && where < 0) followingBot = populationSize + where;
        else if (followingBot == populationSize - 1 && where > 0) followingBot = 0;
        else if (followingBot == populationSize - 1 || followingBot == 0) followingBot += where;
        
        if(isCameraFollowing)
        {
            vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
            vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
        }
        else
        {
            vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
            vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
        }
    }

    public void ReplaceCameraOffset()
    {
        if(!IsUpCamera)
        {
            if(isCameraFollowing)
            {
                vCam1.SetActive(false);
                vCam2.SetActive(true);

                vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
                vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;

                isCameraFollowing = false;
            }
            else
            {
                vCam2.SetActive(false);
                vCam1.SetActive(true);

                vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
                vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;

                isCameraFollowing = true;
            }
        }
    }
    
    public void SetTimeScale(float scale)
    {
        oldTimeScale = Time.timeScale;
        Time.timeScale = scale;
    }

    public void SetOldTimeScale()
    {
        Time.timeScale = oldTimeScale;
    }

    public void CreateMyCar()
    {
        if(myCar != null) Destroy(myCar);

        myCar = Instantiate(prefabs[0], spawnPoints[0]);

        myCar.GetComponent<RearWheelDrive>().isBot = false;
        vCam1.GetComponent<CinemachineVirtualCamera>().Follow = myCar.transform;
        vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = myCar.transform;

        IsCarControl = true;
    }

    public void GasBot(float value)
    {
        myCar.GetComponent<RearWheelDrive>().verticalAxis = value;
    }
}
