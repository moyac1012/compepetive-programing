x = input()
if len(x) <= 2:
    print(0)
    exit()
y = x[:-2]
if 100*int(y) <= int(x) <= 105*int(y):
    print(1)
else:
    print(0)