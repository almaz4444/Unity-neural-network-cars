using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public Toggle traningToggle;


    public void Play()
    {
        if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
        else PlayerPrefs.SetInt("TRANING", 0);

        SceneManager.LoadScene("Game");
    }
}
