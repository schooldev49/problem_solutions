n = int(input())
fizz = pf = 0
buzz = pb = 0
start = 0

for i in range(1, n + 1):
    line = input()
    if line.isnumeric() and start == 0:
        start = int(line) - i
    if "Fizz" in line:
        fizz = i - pf
        pf = i
    if "Buzz" in line:
        buzz = i - pb
        pb = i

if fizz == pf:
    fizz += start
if buzz == pb:
    buzz += start

print(fizz, buzz)
