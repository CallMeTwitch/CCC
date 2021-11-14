# PASSED

length = int(input())

means = [int(input()) for _ in range(length)]

def check(x):
    for q in range(2, int(x ** (1 / 2)) + 1):
        if x % q == 0:
            return False

    return True

for q in means:
    for w in range(q - 3, 0, -1):
        if check(q + w):
            if check(q - w):
                print(q - w, q + w)
                break