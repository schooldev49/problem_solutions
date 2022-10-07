t = int(input())

while t!=0:
    line1 = (input().split())
    n = int(line1[0])
    k = int(line1[1])
    arr = input().split()
    index = n - (k%n)
    for i in range(index, n):
        print(arr[i], end=' '),
    for i in range(index):
        print(arr[i], end=' '),
    print("")
    t = t-1
