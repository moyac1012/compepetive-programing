n = int(input())
ans = 0
if n > 99: ans += 9
if n > 9999: ans += 90
if n > 999999: ans += 900
if n > 99999999: ans += 9000
if n > 9999999999: ans += 90000
if n > 999999999999: ans += 900000
if n > 99999999999999: ans += 90000000
if n > 9999999999999999: ans += 900000000
n = str(n)

if len(n)%2 == 0:
    if(n[:len(n)//2]<=n[len(n)//2:]): 
        ans += int(n[:len(n)//2]) - pow(10, (len(n)//2)-1) + 1
    else:
        ans += int(n[:len(n)//2]) - pow(10, (len(n)//2)-1)

print(ans)