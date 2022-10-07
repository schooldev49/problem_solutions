import math
for i in range(int(input())):
    s = 0
    a,b = map(int, input().split())
    for j in range(a, b + 1):
        res = 0
        for i in hex(j)[2:]:
            res += int(i, 16)
        
        if math.gcd(res, j) > 1:
            s += 1
    print(s)