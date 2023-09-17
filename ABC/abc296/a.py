n = int(input())
s = input()

for i in range(n-1):
    if (s[i] == 'M' and s[i+1] == 'M') or (s[i] == 'F' and s[i+1] == 'F'):
        print('No')
        exit(0)

print('Yes')