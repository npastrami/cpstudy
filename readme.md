# Competitive Programming Patterns Guide

## 1. Sliding Window

### Use Case
Use the Sliding Window technique when dealing with subarray or substring problems involving contiguous elements where you need to find the optimal solution within a fixed or variable-sized window.

### Best Scenarios
- Maximum sum subarray
- Longest substring without repeating characters
- Specific pattern detection

### Example Problems
1. **Maximum Sum Subarray of Size K**: Find the maximum sum of any subarray of size `k` in an array.
2. **Longest Substring Without Repeating Characters**: Find the length of the longest substring without repeating characters in a string.
3. **Longest Subarray with Sum ≤ K**: Find the length of the longest subarray whose sum is less than or equal to `k`.
4. **Minimum Window Substring**: Find the smallest substring containing all characters of a given string.
5. **Subarray Product Less Than K**: Find the number of contiguous subarrays where the product is less than `k`.

---

## 2. Binary Search Tree (BST)

### Use Case
Use a BST when you need to frequently insert, delete, and search elements while maintaining a sorted structure.

### Best Scenarios
- Efficiently managing ordered data
- Fast search, insert, and delete operations

### Example Problems
1. **Insert and Search in BST**: Insert elements into a BST and search for given keys.
2. **Validate Binary Search Tree**: Determine if a binary tree is a valid BST.
3. **Find the Kth Smallest Element**: Find the `k`th smallest element in a BST.
4. **Lowest Common Ancestor**: Find the lowest common ancestor of two nodes in a BST.
5. **Range Sum of BST**: Find the sum of all values within a given range in a BST.

---

## 3. Dijkstra's Algorithm

### Use Case
Use Dijkstra’s Algorithm when you need to find the shortest path from a single source in a graph with non-negative weights.

### Best Scenarios
- Shortest distance from one node to all other nodes in a weighted graph

### Example Problems
1. **Shortest Path in a Graph**: Given a graph with weights, find the shortest path from the starting node to all other nodes.
2. **Network Delay Time**: Calculate the time it takes for all nodes to receive a signal from a starting node in a network.
3. **Minimum Cost to Reach Destination**: Find the minimum cost to reach a specific node from the start node.
4. **Cheapest Flights Within K Stops**: Find the cheapest flight price from a source to a destination with at most `k` stops.
5. **Delivery Route Optimization**: Find the shortest route to deliver packages within a city network.

---

## 4. Two Pointers Technique

### Use Case
Use the Two Pointers Technique when dealing with sorted arrays or linked lists where you need to find pairs, triplets, or optimize searching for elements with certain conditions.

### Best Scenarios
- Finding pairs or subarrays in a sorted sequence

### Example Problems
1. **Two Sum (Sorted Array)**: Find two numbers in a sorted array that add up to a target sum.
2. **Remove Duplicates from Sorted Array**: Remove duplicate elements in a sorted array in-place.
3. **Three Sum**: Find all unique triplets in the array that give the sum of zero.
4. **Container With Most Water**: Find two lines that together with the x-axis form a container that holds the most water.
5. **Palindrome Check**: Check if a string is a palindrome using two pointers.

---

## 5. Binary Search

### Use Case
Use Binary Search when you need to find an element or determine if an element exists in a sorted dataset in logarithmic time.

### Best Scenarios
- Searching in sorted arrays
- Finding an optimal value or position

### Example Problems
1. **Find Element in Sorted Array**: Find the index of a target value in a sorted array.
2. **Find the Square Root**: Find the square root of a number using binary search.
3. **Search in Rotated Sorted Array**: Search for a target in a rotated sorted array.
4. **First Bad Version**: Find the first bad version in a sequence of versions.
5. **Median of Two Sorted Arrays**: Find the median of two sorted arrays in logarithmic time.

---

## 6. Dynamic Programming (Tabulation)

### Use Case
Use Dynamic Programming (Tabulation) when you need to solve problems that exhibit overlapping subproblems and optimal substructure by building solutions bottom-up.

### Best Scenarios
- Problems involving combinations, longest subsequences, or partitioning sets

### Example Problems
1. **Fibonacci Sequence**: Find the nth Fibonacci number using tabulation.
2. **Longest Increasing Subsequence**: Find the length of the longest increasing subsequence in an array.
3. **Knapsack Problem**: Determine the maximum value that can be obtained with given weights and values.
4. **Coin Change**: Find the minimum number of coins to make up a specific amount.
5. **Edit Distance**: Calculate the minimum number of operations required to convert one string to another.

---

## 7. Greedy Algorithm

### Use Case
Use Greedy Algorithms when you can make a sequence of locally optimal choices to get an overall optimal solution. The greedy choice property must be satisfied.

### Best Scenarios
- Minimizing/maximizing cost or resource allocation

### Example Problems
1. **Activity Selection**: Select the maximum number of non-overlapping intervals.
2. **Minimum Number of Coins**: Find the minimum number of coins to make up a certain value.
3. **Fractional Knapsack**: Get the maximum value by selecting items with fractional quantities allowed.
4. **Job Sequencing Problem**: Maximize profit by scheduling jobs with deadlines.
5. **Huffman Coding**: Generate an optimal prefix code for data compression.

---

## 8. Union-Find (Disjoint Set)

### Use Case
Use Union-Find to efficiently handle dynamic connectivity queries, such as finding if two elements are in the same set and uniting sets.

### Best Scenarios
- Graph problems involving cycles or connected components

### Example Problems
1. **Cycle Detection in Undirected Graph**: Check if a cycle exists in an undirected graph.
2. **Connected Components**: Find the number of connected components in a graph.
3. **Kruskal’s Algorithm**: Find the minimum spanning tree of a graph.
4. **Friend Circles**: Determine the number of friend circles in a group.
5. **Redundant Connection**: Identify an edge that can be removed to ensure a tree remains.

---

## 9. Backtracking

### Use Case
Use Backtracking when you need to generate all possible solutions for a problem and explore all possibilities in a recursive manner.

### Best Scenarios
- Problems where you need to try all possible solutions and return the ones that meet a specific condition

### Example Problems
1. **N-Queens Problem**: Place `N` queens on an `N x N` chessboard such that no two queens threaten each other.
2. **Subset Sum Problem**: Find all subsets of a set that sum up to a given target value.
3. **Sudoku Solver**: Solve a given Sudoku puzzle.
4. **Permutations of a String**: Generate all permutations of a given string.
5. **Combination Sum**: Find all unique combinations that sum up to a target value.

---

## 10. Topological Sort (Kahn's Algorithm)

### Use Case
Use Topological Sort when you need to determine the linear ordering of vertices in a Directed Acyclic Graph (DAG) such that each vertex appears before all vertices it points to.

### Best Scenarios
- Scheduling tasks or resolving dependencies between tasks

### Example Problems
1. **Course Schedule**: Determine if all courses can be completed given prerequisite dependencies.
2. **Project Management**: Find the order in which tasks should be performed based on dependencies.
3. **Alien Dictionary**: Determine the order of letters in an alien language given a list of words.
4. **Build System Dependency**: Determine the order of compiling files based on dependencies.
5. **Task Scheduling**: Determine if a set of tasks with prerequisites can be completed.
"""