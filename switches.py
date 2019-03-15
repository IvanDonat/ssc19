s = list(map(int, list(input())))

sum = 0
for i in range(len(s)):
  if s[i] == 0: sum += 1 << i
print(sum)

