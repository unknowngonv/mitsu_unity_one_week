using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour {

	[SerializeField]private GameObject m_clearImage = null;

	public void Initialize()
	{
		this.gameObject.SetActive (false);
	}

	public void SetUp()
	{
		this.gameObject.SetActive (true);
		//m_clearImage.gameObject.SetActive (false);
		StartCoroutine (SetClearObj());
	}

	private IEnumerator SetClearObj()
	{
		yield return new WaitForSeconds (2f);

		SceneManager.LoadScene ("Title");
		yield return null;
		//m_clearImage.gameObject.SetActive (true);
	}

}
