expression = input()
l = []
d = {"}": "{", "]": "[", ")": "("}
res = "true"
for c in expression:
    if c in "([{":
        l.append(c)
    if c in ")]}" and (not l or l.pop() != d[c]):
        res = "false"
print("false" if l else res)
