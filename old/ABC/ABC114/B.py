s = input()
absnum = 10000
for i in range(len(s)-2):
    absnum = min(absnum, abs(753 - int(s[i:i+3])))

print(absnum)
