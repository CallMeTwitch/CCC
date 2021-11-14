# PASSED

num = int(input())

diff = lambda x:[x[q + 1] - x[q] for q in range(len(x) - 1)]

villages = sorted([int(input()) for _ in range(num)])
borders = [(villages[q] + villages[q + 1]) / 2 for q in range(len(villages) - 1)]
sizes = diff(borders)
print(min(sizes))