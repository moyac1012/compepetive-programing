s1 = input()
s2 = input()
s3 = input()

if len(set(list(s1+s2+s3))) > 10:
    print("UNSOLVABLE")
    exit()

if len(s3) - 1 > len(s1) and len(s3) - 1 > len(s2):
    print("UNSOLVABLE")
    exit()

