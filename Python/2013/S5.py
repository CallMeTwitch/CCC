def factors(x):
    return [q for q in range(1, (x + 1)) if x % q == 0]

n = int(input())

nums = [1]
dict = {1:0}
while n not in dict:
    new = []
    for q in nums:
        for w in factors(q):
            if q + w not in dict:
                dict[q + w] = q // w + dict[q]
                new += [q + w]
            elif q // w  + dict[q] < dict[q + w]:
                dict[q + w] = q // w + dict[q]
    nums = new

print(dict[n])