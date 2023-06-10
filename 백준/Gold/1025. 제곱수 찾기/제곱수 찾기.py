from sys import stdin
from math import sqrt


def main():
    n, m = map(int, stdin.readline().split())
    arr = [stdin.readline().rstrip() for _ in range(n)]

    res = -1
    for i in range(n): 
        for j in range(m):  
            for a in range(-n, n):  
                for b in range(-m, m):  
                    num = ''
                    y, x = i, j
                   
                    while 0 <= y < n and 0 <= x < m:
                        num += arr[y][x]
                        if a == 0 and b == 0:
                            break
                        if int(sqrt(int(num))) ** 2 == int(num):
                            res = max(int(num), res)
                        y += a
                        x += b
    print(res)


if __name__ == "__main__":
    main()