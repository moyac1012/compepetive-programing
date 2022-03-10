o = input()
e = input()
s = ""
ocnt = 0
ecnt = 0
for i in range(len(o)+len(e)):
    if (i+1)%2 == 0:
        s += e[ecnt]
        ecnt += 1
    else:
        s += o[ocnt]
        ocnt += 1
print(s)
