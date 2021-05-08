n = int(input())
ans = 0
for i in range(1000000):
    a = str(i)
    if(int(a + a) <= n):
        ans += 1
print(ans-1)