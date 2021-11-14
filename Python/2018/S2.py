# PASSED

size = int(input())

grid = [list(map(int, input().split())) for _ in range(size)]

m = min([min(q) for q in grid])

while grid[0][0] != m:
    grid = list(zip(*grid[::-1]))

for q in grid:
    print(*q)