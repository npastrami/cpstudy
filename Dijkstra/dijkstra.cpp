#include <iostream> // For input-output operations (e.g., std::cout)
#include <vector> // For using the vector container
#include <queue> // For using the priority queue (std::priority_queue)
#include <unordered_map> // For using the unordered_map container
#include <climits> // For using INT_MAX, which represents the maximum integer value

typedef std::pair<int, int> pii; // Define a shorthand for pair<int, int> as 'pii' for convenience

// Function to perform Dijkstra's algorithm to find the shortest path from 'start'
void dijkstra(std::unordered_map<int, std::vector<pii>> &graph, int start) {
    // Priority queue (min-heap) to select the next node with the smallest distance
    std::priority_queue<pii, std::vector<pii>, std::greater<pii>> pq;
    // Map to store the shortest distance to each node from the 'start' node
    std::unordered_map<int, int> distances;

    // Initialize all distances to INT_MAX (representing infinity)
    for (auto &node : graph) {
        distances[node.first] = INT_MAX;
    }
    // Set the distance to the start node as 0
    distances[start] = 0;
    // Push the start node with distance 0 to the priority queue
    pq.push({0, start});

    // Continue processing nodes until the priority queue is empty
    while (!pq.empty()) {
        // Get the node with the smallest distance from the priority queue
        int current_distance = pq.top().first;
        int current_node = pq.top().second;
        pq.pop(); // Remove the node from the queue

        // Skip this node if a shorter distance has already been found
        if (current_distance > distances[current_node]) {
            continue;
        }

        // Traverse all neighbors of the current node
        for (auto &neighbor : graph[current_node]) {
            int next_node = neighbor.first; // The neighbor node
            int weight = neighbor.second; // The weight of the edge to the neighbor
            int new_dist = current_distance + weight; // Calculate the new distance to the neighbor

            // If the new distance is shorter than the previously known distance
            if (new_dist < distances[next_node]) {
                distances[next_node] = new_dist; // Update the distance
                pq.push({new_dist, next_node}); // Push the neighbor with the updated distance into the queue
            }
        }
    }

    // Print the shortest distances from the start node to all other nodes
    for (auto &d : distances) {
        std::cout << "Distance to node " << d.first << ": " << d.second << std::endl;
    }
}

int main() {
    // Define the graph as an adjacency list using unordered_map
    // Each node maps to a vector of pairs representing neighbors and edge weights
    std::unordered_map<int, std::vector<pii>> graph;
    graph[0] = {{1, 1}, {2, 4}}; // Node 0 connects to Node 1 with weight 1, and Node 2 with weight 4
    graph[1] = {{0, 1}, {2, 2}, {3, 5}}; // Node 1 connects to Node 0, Node 2, and Node 3 with given weights
    graph[2] = {{0, 4}, {1, 2}, {3, 1}}; // Node 2 connects to Node 0, Node 1, and Node 3
    graph[3] = {{1, 5}, {2, 1}}; // Node 3 connects to Node 1 and Node 2

    // Call the dijkstra function with the graph and start node 0
    dijkstra(graph, 0);
    return 0;
}
