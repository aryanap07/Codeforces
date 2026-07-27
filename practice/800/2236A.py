t = int(input())

for _ in range(t):
    input()
    h = map(int, input().split())

    mn = float('inf')
    mx = float('-inf')

    for x in h:
        mn = min(mn, x)
        mx = max(mx, x)

    print(mx - mn + 1)
