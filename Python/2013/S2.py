weight = int(input())

length = int(input())

weights = [0] * 3 + [int(input()) for _ in range(length)]

output = 'False'
for q in range(len(weights)):
    if sum(weights[q:(q + 4)]) > weight and output == 'False':
        output = q
print(output)