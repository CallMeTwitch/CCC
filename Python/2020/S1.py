# PASSED

diff = lambda x, y:[abs((x[q + 1] - x[q]) / (y[q + 1] - y[q])) for q in range(len(x) - 1)]

times, position = zip(*sorted([list(map(int, input().split())) for _ in range(int(input()))]))
print(max(diff(position, times)))