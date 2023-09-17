a,b = map(int, input().split())

kaibunlist = []
for i in range(100)[1:]:
    for j in range(10):
        kaibunlist.append(int(str(i) + str(j) + str(i)[::-1]))
cnt = 0
for i in kaibunlist:
    if a <= i <= b: cnt += 1
print(cnt)