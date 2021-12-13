l = sorted(int(input()) for _ in range(int(input())))
print(min((l[f + 1] - l[f] for f in range(len(l) - 1))))
