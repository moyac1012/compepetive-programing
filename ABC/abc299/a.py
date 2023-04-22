n = int(input())
s = input()

t = False
inten = 0
outten = n-1
for i in range(n):
    if s[i] == "|" and not t:
        inten = i
        t = True
    if s[i] == "|" and t:
        outten = i

for x in s[inten+1:outten]:
    if x == "*":
        print("in")
        exit(0)

print("out")