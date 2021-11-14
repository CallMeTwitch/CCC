year = int(input())

while True:
    year += 1
    if len(list(str(year))) == len(set(list(str(year)))):
        break

print(year)