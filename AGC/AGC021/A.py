n = input()
flag = True
for i in n[1:]:
    if i != '9':
        flag = False
if flag: print(int(n[0]) + (9*(len(n)-1)))
else: print(int(n[0])-1 + (9*(len(n)-1)))