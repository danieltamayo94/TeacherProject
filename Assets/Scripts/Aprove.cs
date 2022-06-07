using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;

public class Aprove : MonoBehaviour
{

    private Text [] notaFinalText;
    private Toggle [] tCheckPrefab;
    private bool confirm;
    [SerializeField]
    private GameObject alertCorrect;
    [SerializeField]
    private GameObject alertFail;
    [SerializeField]
    private GameObject FirstScene;
    [SerializeField]
    private GameObject SecondScene;
    private bool changeScene;

    void Start()
    {
       Invoke("setTexts",0.2f);
       confirm=false;
       changeScene = false;
       alertCorrect.SetActive(false);
       alertFail.SetActive(false);
    }

    void setTexts()
    {
         notaFinalText = gameObject.GetComponentsInChildren<Text>();
         tCheckPrefab = gameObject.GetComponentsInChildren<Toggle>();
    }

    public void buttonCheckAprove()
    {
        int f=0;
        for(int i=4 ; i<notaFinalText.Length ; i=i+6){
        
            float val = float.Parse(notaFinalText[i].text);

            Debug.Log(val);
            if (val>=3.0f && tCheckPrefab[f].isOn==false || val<=2.9f && tCheckPrefab[f].isOn==true){
            
                confirm=true;
            }
        
            f++;
        }

        if(confirm){
            confirm = false;
            addAlertFail();
        }
        else{
            confirm = false;
            addAlertCorrect();
        }
    }

    private void addAlertCorrect()
    {
        alertCorrect.SetActive(true);
        Invoke("desactiveAlert",2.5f);
        changeScene = true;
    }

    private void addAlertFail()
    {
        alertFail.SetActive(true);
        Invoke("desactiveAlert",2.5f);
    }


    private void desactiveAlert()
    {
        alertFail.SetActive(false);
        alertCorrect.SetActive(false);
        if (changeScene) 
        {
            FirstScene.SetActive(false);
            SecondScene.SetActive(true);
        }
    }

}
