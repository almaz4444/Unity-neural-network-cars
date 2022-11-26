using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class ErrorPanel : MonoBehaviour
{
    public Text errorText;


    public void OpenErrorPanel(string error)
    {
        errorText.text = error;
        
        gameObject.SetActive(true);
    }
}
