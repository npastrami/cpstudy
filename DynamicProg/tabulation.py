def fibonacci(n):
    # Handle the base case where n is 0 or 1
    if n <= 1:
        return n

    # Create a table to store Fibonacci numbers up to n
    dp = [0] * (n + 1)
    dp[1] = 1

    # Fill the table from 2 to n
    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

    # Return the nth Fibonacci number
    return dp[n]

# Example usage: Find the 6th Fibonacci number
print(fibonacci(6))  # Output: 8
