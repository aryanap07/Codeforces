t = int(input())
for _ in range(t):
    n = int(input())
    print(*[2*i - 1 for i in range(1, n+1)])
