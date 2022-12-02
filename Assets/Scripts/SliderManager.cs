using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class SliderManager : MonoBehaviour
{
    public InputField inputField;
    
    private Slider slider;
    private Toggle toggle;


    private void Awake()
    {
        slider = GetComponent<Slider>();
        toggle = GetComponent<Toggle>();
    }

    public void SaveValues()
    {
        if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed") Time.timeScale = slider.value;
        if(inputField.placeholder.GetComponent<Text>().text == "MutationChance") Manager.MutationChance = slider.value;
        if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength") Manager.MutationStrength = slider.value;
        if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera") Manager.IsUpCamera = toggle.isOn;
    }

    public void SetDefaultValue()
    {
        if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed")
        {
            inputField.text = "1";
            slider.value = 1;

            Time.timeScale = 1;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "MutationChance")
        {
            inputField.text = "0.1";
            slider.value = 0.1f;

            Manager.MutationChance = 0.1f;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength")
        {
            inputField.text = "0.01";
            slider.value = 0.01f;

            Manager.MutationStrength = 0.01f;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera")
        {
            toggle.isOn = false;

            Manager.IsUpCamera = false;
        }
    }

    public void SetCurrentValue()
    {
        if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed")
        {
            inputField.text = Time.timeScale.ToString();
            slider.value = Time.timeScale;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "MutationChance")
        {
            inputField.text = Manager.MutationChance.ToString();
            slider.value = Manager.MutationChance;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength")
        {
            inputField.text = Manager.MutationStrength.ToString();
            slider.value = Manager.MutationStrength;
        }
        if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera")
        {
            toggle.isOn = Manager.IsUpCamera;
        }
    }

    public void SetValueFromSlider()
    {
        inputField.text = slider.value.ToString();
    }

    public void SetValueFromInputField()
    {
        slider.value = float.Parse(inputField.text);
    }
}
