using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DropSlot : MonoBehaviour, IDropHandler
{
    private GameObject itemStudent;
    public void OnDrop(PointerEventData eventData)
    {
            itemStudent = DragManager.itemDragging;
            itemStudent.transform.SetParent(transform);
            itemStudent.transform.position = transform.position;
    }
    void Update()
    {
        if(itemStudent != null && itemStudent.transform.parent != transform)
        {
            itemStudent = null;
        }
    }

  
}
