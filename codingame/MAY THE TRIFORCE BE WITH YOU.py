n = int(input())


def main(n):
    s = 1
    for i in range(n):
        if not i:
            print("." + " " * (n * 2 - 2) + "*")
        else:
            k = "*" * s
            print(f"{k:>{n+(s//2) + n}}")
        s += 2


main(n)
s = 1
for i in range(n):
    print(" " * (n - i - 1) + "*" * s + " " * (n * 2 - s) + "*" * s)
    s += 2
