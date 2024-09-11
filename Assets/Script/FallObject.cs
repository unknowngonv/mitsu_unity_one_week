using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FallObject : MonoBehaviour
{
	[SerializeField] private Transform m_parent = null;
	[SerializeField] private List<FallInstanceObject> m_fallInstanceObjects = null;
	[SerializeField] private Player m_playerObject = null;
	[SerializeField] private CameraObject m_cameraObject = null;
	[SerializeField] private TextMesh m_countText = null;
	[SerializeField] private GameClear m_clearObject = null;
	[SerializeField] private GameOver m_gameOverObject = null;
	private int m_count = 0;
	private readonly int m_maxCount = 3;
	private bool m_isHitPlayer = false;

	private void Start()
	{
		m_isHitPlayer = false;
		m_clearObject.Initialize ();
		m_gameOverObject.Initialize ();
		m_playerObject.SetUp (GameOver);
		m_countText.text = "ぜろ";
	}

	public void SetUp()
	{
		if (m_count >= m_maxCount) 
		{
			GameClear ();
			return;
		}
		m_isHitPlayer = false;
		float x = Random.Range (-2.6f, 2.6f);
		var baseObject = m_fallInstanceObjects [Random.Range (0, m_fallInstanceObjects.Count)];
		var instance = Instantiate (baseObject, new Vector3(x, baseObject.transform.position.y, m_playerObject.transform.localPosition.z), Quaternion.identity);
		instance.transform.localScale = new Vector3 (0.3f, 0.3f, 0.3f);
		instance.transform.SetParent (m_parent, false);
		instance.SetUp (SetUp, CountTime,GameOver, m_isHitPlayer);
	}

	private void CountTime(bool isHitPlayer)
	{
		if (!m_isHitPlayer) {
			m_isHitPlayer = isHitPlayer;
			m_count++;

			var text = "";
			switch (m_count) {
			case 1:
				text = "ひとつ";
				break;
			case 2:
				text = "ふたつ";
				break;
			case 3:
				text = "みっつ";
				break;
			default:
				text = "ぜろ";
				break;
			
			}
			m_countText.text = text;
		}
	}

	private void GameClear()
	{
		m_gameOverObject.Initialize ();
		m_playerObject.PlayWave ();
		m_cameraObject.SetUP (true);
		m_clearObject.SetUp ();
	}

	private void GameOver()
	{
		m_isHitPlayer = true;
		m_cameraObject.SetUP (true);
		m_clearObject.Initialize ();
		m_gameOverObject.SetUp ();
	}
}
