n, nums = int(input()), list(map(int, input().split()))
s = int(input())

for i in range(n):
    # 탐색
    max_num = max(nums[i: min(n, i + s + 1)])
    idx = nums.index(max_num)
    # 교환
    for j in range(idx, i, -1):
        nums[j], nums[j - 1] = nums[j - 1], nums[j]
    # 후처리
    s -= (idx - i)
    if s <= 0: break

print(*nums)