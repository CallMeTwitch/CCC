# PASSED

length = int(input())
side_lengths = [*map(int, input().split())]
widths = [*map(int, input().split())]

area = 0
for q in range(1, length + 1):
    area += (side_lengths[q - 1] + side_lengths[q]) * widths[q - 1] / 2

print(area)