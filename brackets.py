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
