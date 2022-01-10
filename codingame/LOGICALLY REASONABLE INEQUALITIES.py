n = int(input())
k = []
a = ""
D = {}
f = []
s = []
for i in range(n):
    a, b = input().replace(" ", "").split(">")
    if a not in D:
        D[a] = i
    if b not in D:
        D[b] = i + 1
    f += (a,)
    s += (b,)
k = []
for a, b in zip(f, s):
    k += (D[a] > D[b],)

print("consistent" if len(set(k)) == 1 else "contradiction")
