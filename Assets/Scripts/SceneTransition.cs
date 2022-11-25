using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

public class SceneTransition : MonoBehaviour
{
    public Text loadingText;
    public Image loadingImage;
    public bool isInput;

    private static SceneTransition instance;

    public AsyncOperation loadSceneAsyncOperation;


    private void Awake()
    {
        instance = GetComponent<SceneTransition>();
    }

    private void Update()
    {
        if(isInput)
        {
            float progress = loadSceneAsyncOperation.progress;

            loadingText.text = Mathf.Round(progress * 100).ToString() + "%";
            loadingImage.fillAmount = progress;
        }
    }

    public static void SwitchToScene(string nameScene)
    {
        try { instance.loadSceneAsyncOperation = SceneManager.LoadSceneAsync(nameScene); }
        catch {}
    }
}
