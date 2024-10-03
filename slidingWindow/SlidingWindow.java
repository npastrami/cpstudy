public class SlidingWindow {
    // Method to find the maximum sum of subarray of size 'k'
    public static int maxSumSubarray(int[] arr, int k) {
        // Initialize the maximum sum to 0
        int maxSum = 0;
        // Variable to store the sum of the current window
        int windowSum = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }

        // Set maxSum to the sum of the initial window
        maxSum = windowSum;

        // Iterate from the k'th element to the end of the array
        for (int i = k; i < arr.length; i++) {
            // Update the window sum by adding the next element and removing the first element
            windowSum += arr[i] - arr[i-k];
            // Update the maximum sum if the current window sum is greater
            maxSum = Math.max(maxSum, windowSum);
        }

        // Return the maximum sum found
        return maxSum;
    }

    public static void main(String[] args) {
        // Example usage: Find the max sum of the subarray of size 3
        System.out.println(maxSumSubarray(new int[]{1, 2, 3, 4, 5, 6, 7}, 3)); // Output: 18
    }
}