s = input()
t = input()
def myswap(s, i, j):
    s = list(s)
    temp = s[i]
    s[i] = s[j]
    s[j] = temp
    return s
if s == t:
    print("Yes")
    exit()
else:
    for i in range(len(s)):
        for j in range(len(s)):
            if i == j: continue
            if i != j + 1: continue
            if myswap(s, i, j) == list(t):
                print("Yes")
                exit()
print("No")