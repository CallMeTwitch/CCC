num_tests = int(input())

output = []

for _ in range(num_tests):
    worked = 'Y'
    num_cars = int(input())

    order = list(reversed([int(input()) for _ in range(num_cars)]))

    top = num_cars
    bottom = 1

    for q in order:
        if q == top:
            top -= 1
        elif q == bottom:
            bottom += 1
        else:
            worked = 'N'
    output.append(worked)

for q in output:
    print(q)