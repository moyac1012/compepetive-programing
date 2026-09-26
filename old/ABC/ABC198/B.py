n = input()
cnt = 0
for x in n[::-1]:
    if x != '0': break
    cnt += 1
n = n[:len(n)-cnt]
n = n[::-1]
rn = n[::-1]
if n == rn: print("Yes")
else: print("No")
