s = input()
i = 0
j = 0
cut = 0
cur = ''
while i < len(s):
    while cur == s[i:j+1] and j != len(s)-1:
        j += 1
    if cur != s[i:j+1]: cut += 1
    cur = s[i:j+1]
    j += 1
    i = j

print(cut)