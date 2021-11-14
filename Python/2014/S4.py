num_pieces = int(input())
tint_factor = int(input())

dict = {}

n = 0
for _ in range(num_pieces):
    tx, ty, bx, by, t = map(int, input().split())
    for x in range(tx, bx):
        for y in range(ty, by):
            if str(x) + ' ' + str(y) not in dict:
                dict[str(x) + ' ' + str(y)] = t
            else:
                dict[str(x) + ' ' + str(y)] += t

print(sum([1 for q in dict if dict[q] >= tint_factor]))