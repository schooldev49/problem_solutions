n = int(input())
combos = []

for a in range(100):
    A = a * 5
    for b in range(100):
        b = min(a, b)
        B = b * 2
        for c in range(100):
            C = c * 3
            if A + B + C == n and (a, b, c) not in combos:
                combos += ((a, b, c),)

for combo in combos:
    print(*combo)
