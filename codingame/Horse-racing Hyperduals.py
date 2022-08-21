n = int(input())
l = [[*map(int, input().split())] for _ in range(n)]
res = 10000000
for i in range(n):
    for j in range(n):
        if j == i:
            continue
        v1, e1 = l[i]
        v2, e2 = l[j]
        temp = abs(v1 - v2) + abs(e1 - e2)
        res = min(temp, res)

print(res)
