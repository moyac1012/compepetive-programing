s = input()
def is_ACGT(s):
    for x in s:
        if x != 'A' and x != 'C' and x != 'G' and x != 'T':
            return False

    return True

ans = 0
for i in range(len(s)):
    for j in range(len(s)+1)[i+1:]:
        if is_ACGT(s[i:j]):
            ans = max(ans, len(s[i:j]))
print(ans)
        
