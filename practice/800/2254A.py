t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    rounds = 0

    while True:
        v = sorted([a, b, c])

        if v[0] == v[1] or v[1] == v[2]:
            break

        v[0] += 1
        v[2] -= 1

        a, b, c = v
        rounds += 1

    print(rounds)
