s = input()
x,y = s.split('.')
if y <= '2':
    print(x+'-')
elif '3' <= y <= '6':
    print(x)
else:
    print(x+'+')