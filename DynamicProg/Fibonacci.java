public class Fibonacci {
    // Method to find the nth Fibonacci number using tabulation
    public static int fibonacci(int n) {
        // Handle the base case where n is 0 or 1
        if (n <= 1) {
            return n;
        }

        // Create a table to store Fibonacci numbers up to n
        int[] dp = new int[n + 1];
        dp[0] = 0;
        dp[1] = 1;

        // Fill the table from 2 to n
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // Return the nth Fibonacci number
        return dp[n];
    }

    public static void main(String[] args) {
        // Example usage: Find the 6th Fibonacci number
        System.out.println(fibonacci(6)); // Output: 8
    }
}
