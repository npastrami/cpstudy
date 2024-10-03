import java.util.*;

public class Dijkstra {
    static class Node implements Comparable<Node> {
        int vertex, weight;

        Node(int vertex, int weight) {
            this.vertex = vertex;
            this.weight = weight;
        }

        public int compareTo(Node other) {
            return Integer.compare(this.weight, other.weight);
        }
    }
    
    public static Map<Integer, Integer> dijkstra(Map<Integer, List<Node>> graph, int start) {
        PriorityQueue<Node> pq = new PriorityQueue<>();
        Map<Integer, Integer> distances = new HashMap<>();

        // Initialize distances
        for (int node : graph.keySet()) {
            distances.put(node, Integer.MAX_VALUE);
        }
        distances.put(start, 0);
        pq.add(new Node(start, 0));

        while (!pq.isEmpty()) {
            Node current = pq.poll();
            if (current.weight > distances.get(current.vertex)) {
                continue;
            }

            for (Node neighbor : graph.get(current.vertex)) {
                int newDist = distances.get(current.vertex) + neighbor.weight;

                if (newDist < distances.get(neighbor.vertex)) {
                    distances.put(neighbor.vertex, newDist);
                    pq.add(new Node(neighbor.vertex, newDist));
                }
            }
        }

        return distances;
    }

    public static void main (String[] args) {
        Map<Integer, List<Node>> graph = new HashMap<>();
        graph.put(0, Arrays.asList(new Node(1,1), new Node(2, 4)));
        graph.put(0, Arrays.asList(new Node(1,1), new Node(2, 4)));
        graph.put(0, Arrays.asList(new Node(1,1), new Node(2, 4)));
        graph.put(0, Arrays.asList(new Node(1,1), new Node(2, 4)));

        System.out.println(dijkstra(graph, 0)); // Output: {0=0, 1=1, 2=3, 3=4}
    }
}
