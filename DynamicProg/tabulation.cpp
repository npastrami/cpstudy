#include <iostream>
#include <vector>

// Function to find the nth Fibonacci number using tabulation
int fibonacci(int n) {
    // Handle the base case where n is 0 or 1
    if (n <= 1) {
        return n;
    }

    // Create a table to store Fibonacci numbers up to n
    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    // Fill the table from 2 to n
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Return the nth Fibonacci number
    return dp[n];
}

int main() {
    // Example usage: Find the 6th Fibonacci number
    std::cout << fibonacci(6) << std::endl; // Output: 8
    return 0;
}
