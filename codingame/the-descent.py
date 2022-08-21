# game loop
while True:
    l = []
    for i in range(8):
        mountain_h = int(input())
        l += ((mountain_h, i),)
    _, target = max(l)
    print(target)
