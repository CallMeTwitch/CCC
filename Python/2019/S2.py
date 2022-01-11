# PASSED

length = int(input())
means = [int(input()) for _ in range(length)]

check = lambda x:all(x%q for q in range(2, int((x ** .5) + 1))) and x-1

for q in means:
    for w in range(q - 3, 0, -1):
        if check(q - w) and check(q + w):
            print(q - w, q + w)
            break
