from sys import stdin
input = lambda: stdin.readline().rstrip()

MAX = 100_001

if __name__ == "__main__":
    C, N = map(int, input().split())  # Input the maximum capacity (C) and the number of clients (N)
    costs = list(tuple(map(int, input().split())) for _ in range(N))  # Input the cost and number of additional clients for each case

    dp = [0] + [MAX] * C  # Initialize the dynamic programming array with initial values
    for i in range(C):  # Iterate through the capacities
        for cost, client in costs:  # Iterate through the cost and number of additional clients for each case
            if i + client < C:  # If the total number of clients doesn't exceed the capacity
                # Compare the minimum cost based on the increasing number of clients
                dp[i + client] = min(dp[i + client], dp[i] + cost)
            elif i + client >= C:  # If the total number of clients exceeds or equals the capacity
                # Compare the minimum cost based on exceeding the capacity
                dp[C] = min(dp[C], dp[i] + cost)

    print(dp[C])  # Print the minimum cost for the given capacity
