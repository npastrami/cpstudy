#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum sum of a subarray of size 'k'
int maxSumSubarray(std::vector<int> arr, int k) {
    // Initialize the maximum sum and window sum to 0
    int max_sum = 0, window_sum = 0;

    // Calculate the sum of the first 'k' elements
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    // Set max_sum to the sum of the initial window
    max_sum = window_sum;

    // Iterate over the array starting from the 'k'th element
    for (int i = k; i < arr.size(); i++) {
        // Update the window sum by adding the curretn element and subtracting the first element of the previous window
        window_sum += arr[i] - arr[i - k];
        // Update the maximum sum if the current window sum is greater
        max_sum = std::max(max_sum, window_sum);
    }

    // Return the maximum sum found
    return max_sum;
}

int main() {
    // Example usage: Find the max sum of a subarray of size 3
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    std::cout << maxSumSubarray(arr, 3) << std::endl; // Output: 18
    return 0;
}