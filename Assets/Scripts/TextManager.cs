using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class TextManager : MonoBehaviour
{
    public Animator isCopingTextAnim;
    public Text copyText;
    public float clickedTimeOffset = 3;
    private float timeOfPointerDown;



    public void OpenURL(Text urlText)
    {
        Application.OpenURL(urlText.text);
    }
    
    public void CopyText(Text copyText)
    {
        GUIUtility.systemCopyBuffer = copyText.text;
        isCopingTextAnim.SetTrigger("Anim");
    }

    public void PointerDown()
    {
        timeOfPointerDown = Time.time;
    }

    public void PointerUp()
    {
        if(Time.time - timeOfPointerDown >= clickedTimeOffset) CopyText(copyText);
    }
}