using UnityEngine;

public class EasyGizmosVisualization : MonoBehaviour
{
    [SerializeField] private Color color;
    [SerializeField] private float radius = 0;

    private void Update() {}

    private void OnDrawGizmos() {
        Gizmos.color = color;
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
