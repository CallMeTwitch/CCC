class_size, num_comparisons = map(int, input().split())

comparisons = [list(map(int, input().split())) for _ in range(num_comparisons)]
question = list(map(int, input().split()))

def follow(start_index, comparisons, direction = 'Taller'):
    if direction == 'Taller':
        return [w for q, w in comparisons if q == start_index]
    else:
        return [q for q, w in comparisons if  w == start_index]

start = [question[0]]
end = question[1]
while start and end not in start:
    nxt = []
    for q in start:
        nxt += follow(q, comparisons)
    start = nxt

if end in start:
    exit('yes')

start = [question[0]]
end = question[1]
while start and end not in start:
    nxt = []
    for q in start:
        nxt += follow(q, comparisons, direction = 'Shorter')
    start = nxt

if end in start:
    print('no')

else:
    print('unknown')