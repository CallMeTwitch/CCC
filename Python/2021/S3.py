# PASSED

people = [list(map(int, input().split())) for _ in range(int(input()))]

def calc(pos):
    output = 0

    for p, w, d in people:
        if abs(p - pos) > d:
            if p < pos:
                output += ((pos - d) - p) * w
            else:
                output += (p - (pos + d)) * w

    return output

start = 0
end = max(p[0] for p in people)

while start + 1 < end:
    mid = (start + end) // 2

    time1, time2 = calc(mid), calc(mid + 1)

    if time1 >= time2:
        start = mid
    else:
        end = mid

print(min(calc(start), calc(end)))