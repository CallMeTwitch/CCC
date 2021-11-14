# PASSED

r, c = int(input()), int(input())

rows = [0] * r
columns = [0] * c

for _ in range(int(input())):
    rc, i = input().split()

    if rc == 'R':
        rows[int(i) - 1] += 1
    else:
        columns[int(i) - 1] += 1

n = 0
for q in rows:
    for w in columns:
        n += 1 if (w + q) % 2 else 0

print(n)