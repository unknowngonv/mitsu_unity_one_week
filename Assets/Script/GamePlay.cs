using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePlay : MonoBehaviour
{

	[SerializeField]private FallObject m_fallObject = null;

	private void Start()
	{
		m_fallObject.SetUp ();
	}
}
