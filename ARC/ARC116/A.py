t = int(input())

for x in range(t):
    c = int(input())
    if c%2 == 1:
        print("Odd")
    else:
        cnt2 = 0
        if c%4 == 0:
            print("Even")
        else:
            print("Same")

