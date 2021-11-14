# PASSED

r, c = int(input()), int(input())
d = dict()
for x in range(r):
    for y, q in enumerate(list(map(int, input().split()))):
        if (x + 1) * (y + 1) in d:
            d[(x + 1) * (y + 1)] += [q]
        else:
            d[(x + 1) * (y + 1)] = [q]

done = set([1])
current = set([1])
while current:
    new = set()
    for q in current:
        if q in d:
            for w in d[q]:
                if w not in done:
                    done.add(w)
                    new.add(w)
    current = new
    if r * c in current:
        exit('yes')
print('no')