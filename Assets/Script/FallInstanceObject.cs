using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallInstanceObject : MonoBehaviour
{
	[SerializeField] private Rigidbody m_rigidBody = null;
	[SerializeField] private FixedJoint m_fixedJoint = null;
	[SerializeField] private float m_breakForce = 200f;
	[SerializeField] private float m_breakTorque = 200f;
	private bool m_isSticking = false;
	private Action m_callback = null;
	private Action <bool> m_finishCallback = null;
	private Action m_gameOverCallback = null;
	private bool m_isHitPlayer = false;

	public void SetUp(Action callback, Action<bool> finishCallback,Action gameOverCallback, bool isHitPlayer)
	{
		m_callback = callback;
		m_isSticking = true;
		m_finishCallback = finishCallback;
		m_isHitPlayer = isHitPlayer;
		m_gameOverCallback = gameOverCallback;
	}

	public void SetBool(bool isSet)
	{
		m_isSticking = isSet;
	}

	private void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.tag == "Player" || collision.gameObject.tag == "FallObject")
		{			
			if (m_fixedJoint == null && m_isSticking)
			{
				m_rigidBody.gameObject.AddComponent<FixedJoint> ();
				m_fixedJoint = GetComponent<FixedJoint> ();

				m_fixedJoint.connectedBody = collision.gameObject.GetComponent<Rigidbody> ();
				m_fixedJoint.breakForce = m_breakForce;
				m_fixedJoint.breakTorque = m_breakTorque;
				m_fixedJoint.enableCollision = true;
				m_fixedJoint.enablePreprocessing = true;

				m_rigidBody.gameObject.transform.parent = collision.gameObject.transform;
				m_rigidBody.Sleep ();
				m_rigidBody.constraints = RigidbodyConstraints.FreezeAll;

				m_finishCallback.Invoke (true);
				m_callback.Invoke ();
				m_isSticking = false;
			}
		}
		else if(collision.gameObject.tag == "Plane")
		{
			m_callback.Invoke ();
			DestroyObject (m_rigidBody.gameObject);
		}
		else if(collision.gameObject.tag == "Enemy")
		{
			m_gameOverCallback.Invoke ();
		}
	}

}
