n = int(input())
a = []
for i in range(n):
  x = int(input())
  a.append(x)

solved = False
for bits in range(0, 1<<(n-1)):
  s = 0
  for i in range(n):
    if bits & (1<<i): s += a[i]
    else: s -= a[i]

  if s % 360 == 0:
    solved = True

if solved: print("YES")
else: print("NO")
