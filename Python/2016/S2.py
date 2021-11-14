# PASSED

max_ = int(input()) - 1

length = int(input())

d = list(sorted(list(map(int, input().split()))))
m = list(sorted(list(map(int, input().split())), reverse = True))

if max_:
    print(sum([max(d[q], m[q]) for q in range(length)]))
else:
    print(sum([max(d[q], m[length - q - 1]) for q in range(length)]))