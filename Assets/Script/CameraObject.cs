using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraObject : MonoBehaviour {

	[SerializeField] private CameraObject m_cameraObject = null;
	[SerializeField] private GameObject m_playerObject = null;
	private bool m_isClear = false;

	private void Update ()
	{
		if (m_isClear)
		{
			var speed = 0.5f;
			var step = Time.deltaTime * speed;
			m_cameraObject.transform.position = Vector3.MoveTowards (m_cameraObject.transform.position, m_playerObject.transform.position, step);
		}
	}

	public void SetUP(bool isClear)
	{
		m_isClear = isClear;
	}
}
