# A sequence of brackets can be validified by a stack.
# Whenever we see a new opening bracket, push it onto the stack
# Whenever we see a closing bracket, pop the stack and confirm they match
# Common mistake: not checking if stack is empty when closing bracket

stk = []
opening = ['(','{','[','<']
closing = [')','}',']','>']

legal = True
for x in input():
  if x in opening:
    stk.append(x)

  if x in closing:
    if len(stk) == 0:
      print("NO")
      legal = False
      break
    if stk[-1] == opening[closing.index(x)]:
      stk.pop(len(stk)-1)
      continue
    else:
      print("NO")
      legal = False
      break

if legal:
  print("YES")
