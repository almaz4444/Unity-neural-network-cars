using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class NeuralNetworkElement : MonoBehaviour
{
    public Text text;


    public void SetSelectedNetwork()
    {
        MenuManager.selectedNetworkName = text.text;
    }
}
