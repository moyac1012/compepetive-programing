s = input()
t = input()
if s == t:
    print("Yes")
    exit()
for i in range(len(s)):
    s = s[len(s)-1] + s[:len(s)-1]
    #print(s)
    if s == t:
        print("Yes")
        exit()
    
print("No")