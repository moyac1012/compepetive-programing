a,b = map(int , input().split())
s = input()
num = [0,1,2,3,4,5,6,7,8,9]

if len(s) != a+b+1 or s[a] != '-' or not s[:a].isdigit() or not s[a+1].isdigit():
    print("No")
    exit()

print("Yes")