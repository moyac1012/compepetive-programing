n = input()
strnum = ""
ans = 0
for i in range(2 ** (len(n)-1) ):
    for j in range(len(n)):
        strnum += n[j]
        if (i >> j) & 1:
            strnum += '+'
    #print(strnum)
    numlist = strnum.split('+')
    #print(numlist)
    for x in numlist:
        ans += int(x)

    strnum = ""
print(ans)