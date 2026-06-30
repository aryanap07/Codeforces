import sys
 
input = sys.stdin.readline
 
t = int(input())
 
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
 
    prefix_sum = 0
    best = float("inf")
    ans = []
 
    for i in range(n):
        prefix_sum += a[i]
        best = min(best, prefix_sum // (i + 1))
        ans.append(best)
 
    print(*ans)
