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
                inputField.text = "";
                _mm.SaveNewNetwork(inputField.text);
            }
            else
            {
                inputField.text = "";
                _mm.SaveInputNetwork(inputField.text + "\n");
            }
        }
    }

    public void NetworkSwitch(bool where)
    {
        isNewNetwork = where;
    }
}
