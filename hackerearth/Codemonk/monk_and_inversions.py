for i in range(int(input())):
    n = int(input())
    m = []
    for i in range(n):
        m.append(list(map(int, input().split())))
    
    count = 0

    for i in range(n):
        for j in range(n):
            for a in range(i,n):
                for b in range(j,n):
                    if m[i][j] > m[a][b]:
                        count +=1
            
    print(count)