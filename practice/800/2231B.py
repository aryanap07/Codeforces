import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    descents = [i for i in range(n - 1) if a[i] > a[i + 1]]
    
    if not descents:
        print("Yes")
        return
    
    k_min = max(a[d] - a[d + 1] for d in descents)
    k_max = float('inf')
    
    for i in range(len(descents) - 1):
        d1, d2 = descents[i], descents[i + 1]
        
        if d2 == d1 + 1:
            print("No")
            return

        max_gap = max(a[p + 1] - a[p] for p in range(d1 + 1, d2))
        
        if max_gap <= 0:
            print("No")
            return
        
        k_max = min(k_max, max_gap)
    
    print("Yes" if k_min <= k_max else "No")

t = int(input())
for _ in range(t):
    solve()
