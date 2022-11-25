using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class AddNN : MonoBehaviour
{
    public MenuManager _mm;

    private bool isNewNetwork = true;


    public void Open()
    {
        gameObject.SetActive(true);
    }

    public void Close(InputField inputField)
    {
        gameObject.SetActive(false);

        if(inputField.text != "")
        {
            if(isNewNetwork) 
            {
                _mm.SaveNewNetwork(inputField.text);
                inputField.text = "";
            }
            else
            {
                _mm.SaveInputNetwork(inputField.text);
                inputField.text = "";
            }
        }
    }

    public void NetworkSwitch(bool where)
    {
        isNewNetwork = where;
    }
}
