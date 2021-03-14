n = input()
n = int(n)
ans = 0
for i in range(len(str(n)) + 1):
    if i == 0:
        continue
    ans += ((i-1)//3)*(n-pow(10, len(str(n))-1))
print(ans)