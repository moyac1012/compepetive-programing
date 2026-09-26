A = [int(x) for x in input().split()]
n, m = A[0],A[1]
print( pow(10, n, m*m) // m % m)