s = input()

ans = ''
r = 0
for x in s:
    if x != 'R':
        if r%2 == 0: 
            if ans == '':
                ans += x
            elif ans[len(ans)-1] == x:
                ans = ans[:-1]
            else:
                ans += x
        else:
            if ans[0] == x:
                ans = ans[1:]
            else:
                ans = x + ans
        #print(ans)
    else:
        r += 1
#print(ans)
if r%2 == 1: ans = ans[::-1]

print(ans)