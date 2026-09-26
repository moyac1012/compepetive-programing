n,a,b = map(int, input().split())
wa =  0
ans = 0
for i in range(n+1):
    for s in str(i):
        wa += int(s)
    if a <= wa <= b:
        ans += i
    wa = 0
print(ans)