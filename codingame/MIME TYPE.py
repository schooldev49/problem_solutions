n = int(input())
q = int(input())
d = {}

for i in range(n):
    ext, mt = input().split()
    d[ext.upper()] = mt

for i in range(q):
    fname = input().split(".")
    ext = fname[-1].upper() if len(fname) > 1 else None
    print(d.get(ext, "UNKNOWN"))
