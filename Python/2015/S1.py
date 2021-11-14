lst = []
for _ in range(int(input())):
    n = int(input())
    if n:
        lst += [n]
    else:
        lst.pop()
print(sum(lst))