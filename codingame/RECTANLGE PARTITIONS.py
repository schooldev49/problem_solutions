def sides(l):
    res = {}
    for i, mi in enumerate(l[:-1]):
        for mj in l[i + 1 :]:
            d = mj - mi
            res[d] = res.get(d, 0) + 1
    return res


w, h, count_x, count_y = map(int, input().split())
mx = [0] + [*map(int, input().split())] + [w]
my = [0] + [*map(int, input().split())] + [h]

x = sides(mx)
y = sides(my)

print(sum(nd * y.get(d, 0) for key, val in x.items()))
