import pprint

a = [[0,1,2],[3,4,5],[6,7,8]]
b = [[0,1,2],[3,4,5],[6,7,8]]

pprint.pprint(a)

for x in range(0,3):
    for y in range(0,3):
        b[x][y] = a[2-y][2-x]

print(b)