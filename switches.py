# There are two approaches to solve this. One is using dynamic programming.
# The other approach is to notice that after reversing the string and
# swapping all the 0s and 1s, the procedure is equivalent to subtracting 1 from
# binary numbers.

s = list(map(int, list(input())))

sum = 0
for i in range(len(s)):
  if s[i] == 0: sum += 1 << i
  
print(sum)
