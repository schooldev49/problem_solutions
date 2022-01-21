def so(num):
    return num + sum(map(int, str(num)))


n = int(input())
check = n

c = 0

for i in range(n, max(n - 1000, 0), -1):
    l = []
    while i <= check:
        l += (i,)
        i = so(i)
    if n in l:
        c += 1

print(["NO", "YES"][c >= 2])
