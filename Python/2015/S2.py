def do(x):
    d = {'S':0, 'M':1, 'L':2}
    try:
        return int(x)
    except:
        return d[x]

num_jerseys = int(input())
num_requests = int(input())

jerseys = [[q + 1, do(w)] for q, w in enumerate([input() for _ in range(num_jerseys)])]
requests = [list(reversed(list(map(do, input().split())))) for _ in range(num_requests)]

requests = sorted(requests, key = lambda x:x[1])

jersey_nums, jersey_sizes = zip(*jerseys)
jersey_nums, jersey_sizes = list(jersey_nums), list(jersey_sizes)

n = 0
for q in requests:
    if q[0] in jersey_nums:
        if jersey_sizes[jersey_nums.index(q[0])] >= q[1]:
            n += 1
            del jersey_sizes[jersey_nums.index(q[0])]
            del jersey_nums[jersey_nums.index(q[0])]
print(n)