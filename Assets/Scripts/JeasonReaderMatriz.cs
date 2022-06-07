using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using UnityEditor;


public class JeasonReaderMatriz : MonoBehaviour
{

    public DatosList _datosList = new DatosList();
    private Text[] header;
    [SerializeField]
    private GameObject extraDataPrefab;
    [SerializeField]
    private GameObject itemStudent;
    private List<GameObject> temporalPrefabs = new List<GameObject>();
    private GameObject _tempGO;
    private string path;
    private string jsonReader;



    public void callAddToTable()
    {
        AddToTable();
    }

    private void AddToTable()
    {
        path = Application.streamingAssetsPath + "/estudiantes.json";
        jsonReader = File.ReadAllText(path);
        if(jsonReader != null)
        {
            _datosList = JsonUtility.FromJson<DatosList>(jsonReader);
   
            foreach(Datos item in _datosList.datos)
            {
                _tempGO = Instantiate(extraDataPrefab, new Vector3(0f,0f,0f), Quaternion.identity) as GameObject;
                _tempGO.transform.parent = GameObject.Find("Content").transform;
                temporalPrefabs.Add(_tempGO);
                _tempGO.transform.localScale = new Vector3(1f,1f,1f);
                _tempGO.transform.GetChild(0).GetComponent<Text>().text = item.codigo_identificacion;
                _tempGO.transform.GetChild(1).GetComponent<Text>().text = item.nombre;
                _tempGO.transform.GetChild(2).GetComponent<Text>().text = item.apellido;
                _tempGO.transform.GetChild(3).GetComponent<Text>().text = item.correo_institucional;
                _tempGO.transform.GetChild(4).GetComponent<Text>().text = item.nota_final.ToString();
            }
        }
        else
        {
            Debug.Log("No se encontró archivo Json");
        }

       
    }

    public void AddToPoolItems()
    {
        path = Application.streamingAssetsPath + "/estudiantes.json";
        jsonReader = File.ReadAllText(path);
        if (jsonReader != null)
        {
            _datosList = JsonUtility.FromJson<DatosList>(jsonReader);

            foreach (Datos item in _datosList.datos)
            {
                _tempGO = Instantiate(itemStudent, new Vector3(0f, 0f, 0f), Quaternion.identity) as GameObject;
                _tempGO.transform.parent = GameObject.Find("PoolContainerStudents").transform;
                temporalPrefabs.Add(_tempGO);
                _tempGO.transform.localScale = new Vector3(1f, 1f, 1f);
                _tempGO.transform.GetChild(0).GetComponent<Text>().text = "CI: " + item.codigo_identificacion;
                _tempGO.transform.GetChild(1).GetComponent<Text>().text = item.nombre;
                _tempGO.transform.GetChild(2).GetComponent<Text>().text = item.apellido;
                _tempGO.transform.GetChild(3).GetComponent<Text>().text = item.nota_final.ToString();
            }
        }
        else
        {
            Debug.Log("No se encontró archivo Json");
        }
    }

}
