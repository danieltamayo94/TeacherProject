using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuOptions : MonoBehaviour
{
    [SerializeField]
    private GameObject firstScenePrefab;

   private JeasonReaderMatriz jsMatriz;

    private void Start()
    {
        jsMatriz = GameObject.FindGameObjectWithTag("ReaderManager").GetComponent<JeasonReaderMatriz>();
    }

    public void OpenFirstScene()
    {
        firstScenePrefab.SetActive(true);
        jsMatriz.callAddToTable();
        gameObject.SetActive(false);
    }
}
