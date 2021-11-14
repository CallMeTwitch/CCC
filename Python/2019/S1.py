# PASSED

translations = list(input())
V, H = translations.count('V'), translations.count('H')

grid = [
    [1, 2],
    [3, 4]
]

for _ in range(V % 2):
    grid[0][0], grid[0][1] = grid[0][1], grid[0][0]
    grid[1][0], grid[1][1] = grid[1][1], grid[1][0]


for _ in range(H % 2):
    grid[0][0], grid[1][0] = grid[1][0], grid[0][0]
    grid[0][1], grid[1][1] = grid[1][1], grid[0][1]

for q in grid:
    print(*q)