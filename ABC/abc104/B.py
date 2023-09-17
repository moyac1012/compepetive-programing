s = input()
if s[0] != 'A':
    print("WA")
    exit()
s = s[1:]
cntC = 0
cntU = 0
for x in s[1:len(s)-1]:
    if x == 'C':
        cntC += 1

for x in s:
    if x.isupper():
        cntU += 1

if cntU >= 2:
    print("WA")
    exit()

s.replace('C', '')
        
if cntC != 1:
    print("WA")
    exit()

for x in s:
    if s.isupper():
        print("WA")
        exit()
print("AC")
