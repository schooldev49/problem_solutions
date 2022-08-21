import math

n = int(input())
m = []
for i in range(n):
    x, y = [int(j) for j in input().split()]
    if i == 0:
        X = x
        Y = y
        SX = x
        SY = y
    else:
        m += ((x, y),)

d = 0
while m:
    short = min(m, key=lambda x: math.hypot(X - x[0], Y - x[1]))
    shX, shY = short
    d += math.hypot(shX - X, shY - Y)
    m.remove(short)
    X, Y = shX, shY

d += math.hypot(X - SX, Y - SY)

print(round(d))
