docks = [0 for _ in range(int(input()))]
num_planes = int(input())

done = False
for _ in range(num_planes):
    m = int(input()) - 1
    if not done:
        while True:
            if docks[m] == 0:
                docks[m] = 1
                break
            m -= 1
            if m == -1:
                done = True
                break
print(sum(docks))