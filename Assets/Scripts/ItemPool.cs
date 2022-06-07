using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ItemPool : MonoBehaviour, IDropHandler
{
    private JeasonReaderMatriz jsMatriz;
    private DropSlot dropSlot;
    private Text[] notaFinalTextWin;
    private Text[] notaFinalTextLose;
    private bool confirmWin;
    private bool confirmLose;
    [SerializeField]
    private GameObject itemPool;
    [SerializeField]
    private GameObject slotsAmountWin;
    [SerializeField]
    private GameObject slotsAmountLose;
    [SerializeField]
    private GameObject AlertWin;
    [SerializeField]
    private GameObject AlertLose;


    public void OnDrop(PointerEventData eventData)
    {
        DragManager.itemDragging.transform.SetParent(this.transform);
        itemPool = DragManager.itemDragging;
    }

    void Start()
    {
        jsMatriz = GameObject.FindGameObjectWithTag("ReaderManager").GetComponent<JeasonReaderMatriz>();
        dropSlot = GameObject.FindGameObjectWithTag("SlotsWin").GetComponent<DropSlot>();
        jsMatriz.AddToPoolItems();
        confirmWin = false;
        confirmLose = false;
    }

    void callEnd()
    {
        notaFinalTextWin = slotsAmountWin.GetComponentsInChildren<Text>();
        notaFinalTextLose = slotsAmountLose.GetComponentsInChildren<Text>();

        for (int i = 3; i < notaFinalTextWin.Length; i = i + 4)
        {
            float val = float.Parse(notaFinalTextWin[i].text);
            if (val < 3)
            {
                confirmWin = true;
            }
        }

        for (int i = 3; i < notaFinalTextLose.Length; i = i + 4)
        {
            float val = float.Parse(notaFinalTextLose[i].text);
            if (val >= 3.0f)
            {
                confirmLose = true;
            }
        }

        if (!confirmWin && !confirmLose)
        {
            confirmWin = false;
            confirmLose = false;
            AlertWin.SetActive(true);
            AlertLose.SetActive(false);
        }
        else
        {
            confirmWin = false;
            confirmLose = false;
            AlertLose.SetActive(true);
            AlertWin.SetActive(false);
        }
    }

    void Update()
    {
        if (transform.childCount==0)
        {
            callEnd();
        }
      
    }

}
