# PASSED

_ = input()
lst = sorted(list(map(int, input().split())))

output = []
if len(lst) % 2:
    output.append(lst.pop(0))

while lst:
    output.append(lst[-1])
    output.append(lst[0])
    lst = lst[1:-1]
print(*reversed(output))