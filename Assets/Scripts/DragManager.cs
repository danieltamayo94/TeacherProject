using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragManager : MonoBehaviour, IDragHandler, IEndDragHandler, IBeginDragHandler
{   
    
    public static GameObject itemDragging;
    private Vector3 startPosition;
    private Transform startParent;
    private Transform dragParent;

    void Start()
    {
        dragParent = GameObject.FindGameObjectWithTag("DragParent").transform;
    }

    public void OnDrag(PointerEventData eventData)
    {
        transform.position = Input.mousePosition;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        itemDragging = null;

        if(transform.parent == dragParent)
        {
            transform.position = startPosition;
            transform.SetParent(startParent);
        }
    }

     public void OnBeginDrag(PointerEventData eventData)
    {
        itemDragging = gameObject;
        startPosition = transform.position;
        startParent = transform.parent;
        transform.SetParent(dragParent);
    }
}
