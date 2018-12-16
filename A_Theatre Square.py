n, m, a = input().split()
n = int(n)
m = int(m)
a = int(a)
ncount = n // a 
if n % a != 0:
  ncount += 1
mcount = m // a
if m % a != 0:
  mcount += 1
print(ncount * mcount)
