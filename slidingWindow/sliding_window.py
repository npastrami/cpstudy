def max_sum_subarray(arr, k):
    # Initialize the maximum sum to 0
    max_sum = 0
    # Calculate the sum of the first 'k' elements
    window_sum = sum(arr[:k])

    # Iterate over the array starting from index 'k' to the end
    for i in range(len(arr) - k):
        # Update the window sum by removing the first element and adding the next element
        window_sum = window_sum - arr[i] + arr[i + k]
        # Update the maximum sum if the current window sum is greater
        max_sum = max(max_sum, window_sum)
        
    # Return the maximum sum found
    return max_sum

# Example usage: find the max sum of a subarray of size 3
print(max_sum_subarray([1, 2, 3, 4, 5, 6, 7], 3))  # Output: 18
