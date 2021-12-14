from itertools import combinations

m, n, d, k = int(input()), int(input()), [*map(int, input().split())], []
for i in range(1, n + 1):
    for j in combinations(d, i):
        if sum(j) <= m:
            k += ((sum(j), len(j), j),)
print(*max(k, key=lambda x: (x[0], -x[1]))[2])
