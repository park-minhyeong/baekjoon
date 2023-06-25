# Receive input
N = int(input())  # Number of regions
budgets = list(map(int, input().split()))  # Budget requests for each region
M = int(input())  # Total budget

# Calculate the sum of budget requests
total_budgets = sum(budgets)

# If the sum of budget requests is less than or equal to the total budget
if total_budgets <= M:
    print(max(budgets))  # Print the maximum budget request
else:
    start = 0  # Start point
    end = max(budgets)  # End point

    while start <= end:
        mid = (start + end) // 2  # Set the midpoint as the cap

        # Calculate the sum of budgets allocated with the cap
        allocated_budgets = sum([min(budget, mid) for budget in budgets])

        # If the sum of allocated budgets is less than or equal to the total budget, increase the cap
        if allocated_budgets <= M:
            start = mid + 1
        # If the sum of allocated budgets exceeds the total budget, decrease the cap
        else:
            end = mid - 1

    print(end)  # Print the cap
