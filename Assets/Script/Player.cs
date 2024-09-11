using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
	private Rigidbody m_rigidbody;

	[SerializeField]private GameObject m_targetCamera = null;

	private Animator m_animator = null;

	private Vector3 m_playerPosition;

	private bool m_isGround = false;

	public float m_speed = 0.0000001f;

	public float m_jump = 200;

	private Action m_gameOverCallback = null;

	private void Start()
	{
		m_rigidbody = this.GetComponent<Rigidbody> ();

		m_animator = this.GetComponent<Animator> ();

		m_playerPosition = this.transform.position;

		m_isGround = true;
	}

	public void SetUp(Action gameOverCallback)
	{
		m_gameOverCallback = gameOverCallback;
	}


	private void Update()
	{
		if (m_isGround)
		{
			var x = Input.GetAxisRaw ("Horizontal") * Time.deltaTime * m_speed;

			var z = Input.GetAxisRaw ("Vertical") * Time.deltaTime * m_speed;

			m_rigidbody.MovePosition (transform.position + new Vector3 (x, 0, z));

			Vector3 direction = transform.position - m_playerPosition;

			if (direction.magnitude > 0.01f) 
			{
				//transform.rotation = Quaternion.LookRotation (new Vector3 (direction.x, 0, direction.z));

				m_animator.SetBool ("Running", true);
			}
			else
			{
				m_animator.SetBool ("Running", false);
			}

			m_playerPosition = transform.position;

			if (Input.GetButton ("Jump")) 
			{
				m_rigidbody.AddForce (transform.up * m_jump);

				if (m_rigidbody.velocity.magnitude > 0) 
				{
					m_rigidbody.AddForce (transform.forward * m_jump + transform.up * m_jump);
				}
			}

		}
	}
		
	private void OnCollisionExit(Collision collision)
	{
		m_isGround = true;

		m_animator.SetBool ("Jumping", false);
	}

	private void OnCollicionExit(Collision collision)
	{
		m_isGround = false;

		m_animator.SetBool ("Jumping", true);
	}

	private void OnCollisionEnter(Collision collision)
	{
		if(collision.gameObject.tag == "Enemy")
		{
			m_gameOverCallback.Invoke ();
		}
	}

	public void LookAt()
	{
		m_rigidbody.gameObject.transform.LookAt (m_targetCamera.transform);
	}

	public void PlayWave()
	{
		m_animator.SetBool ("Waving", false);
	}


}
