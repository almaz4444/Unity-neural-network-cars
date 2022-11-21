using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class AddNN : MonoBehaviour
{
    public MenuManager _mm;


    public void Open()
    {
        gameObject.SetActive(true);
    }

    public void Close(InputField inputField)
    {
        gameObject.SetActive(false);
        _mm.SaveNewNetwork(inputField.text);
        inputField.text = "";
    }
}
