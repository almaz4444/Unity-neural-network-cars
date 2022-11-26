using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class AddNN : MonoBehaviour
{
    public MenuManager _mm;
    public ErrorPanel errorPanel;

    private bool isNewNetwork = true;


    public void Close(InputField inputField)
    {
        if(inputField.text.Replace(" ", "") != "")
        {
            if(isNewNetwork) 
            {
                string text = inputField.text;
                inputField.text = "";
                _mm.SaveNewNetwork(text);
            }
            else
            {
                string text = inputField.text;
                inputField.text = "";
                _mm.SaveInputNetwork(text + "\n");
            }
        }
        else errorPanel.OpenErrorPanel("Название нейросети не должно быть пустым или содержать только пробелы!");
    }

    public void NetworkSwitch(bool where)
    {
        isNewNetwork = where;
    }
}