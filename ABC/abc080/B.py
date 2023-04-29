n = input()
a = 0
for x in n:
    a += int(x)
print("Yes "if int(n)%a == 0 else "No")