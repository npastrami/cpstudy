import heapq

def dijkstra(graph, start):
    # Initialize the priority queue (min-heap)
    pq = [(0, start)]
    # Initialize distances with infinity, except the start node
    distances = {node: float('inf') for node in graph}
    distances[start] = 0
    
    while pq:
        # Get the node with the smallest distance
        current_distance, current_node = heapq.heappop(pq)
        
        # If a better distance was already found, skip processing
        if current_distance > distances[current_node]:
            continue
        
        # Explore neighbors of the current node
        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight
            
            # Update the distance if a shorter path is found
            if distance < distance[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))
                
    return distances

# Example graph
graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 4, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 1},
    'D': {'B': 5, 'C': 1},
}
print(dijkstra(graph, 'A')) # Output: {'A': 0, 'B': 1, 'C': 3, 'D': 4}
    