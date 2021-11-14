# PASSED

length = int(input())

s1 = list(map(int, input().split()))
s2 = list(map(int, input().split()))

n = 0 if s1[0] != s2[0] else 1
for q in range(1, length):
    s1[q] += s1[q - 1]
    s2[q] += s2[q - 1]
    if s1[q] == s2[q]:
        n = q + 1

print(n)