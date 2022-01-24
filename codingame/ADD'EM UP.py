input()
l = sorted(map(int, input().split()))
c = 0
while len(l) > 1:
    s = l[0] + l[1]
    c += s
    l = sorted([s] + l[2:])

print(c)
