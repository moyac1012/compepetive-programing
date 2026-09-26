n = int(input())
a = list(map(int, input().split()))

MOD = 998244353
a = sorted(a)
na = sorted(a, reverse=True)
print(na)
if len(a) == 1:
    print((a[0]*a[0])%MOD)
    exit()
ruiseki = []
ruiseki.append(na[0])
cnt = 1
for x in na[1:]:
    ruiseki.append(ruiseki[cnt-1] + x)
    ruiseki[cnt] = ruiseki[cnt]%MOD
    cnt += 1

print(ruiseki)
ans = 0
x = 0
cnt = 0
for i in a[::-1]:
    x += ruiseki[cnt]
    x %= MOD
    ans +=(i*x)%MOD
    ans %= MOD
    print('x ' + str(x))
    print('a ' + str(i))
    print('ans ' + str(ans))
    cnt += 1
for i in a:
    ans += (i*i)%MOD
    ans %= MOD

print(ans)