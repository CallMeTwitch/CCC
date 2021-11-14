num = int(input())

partner_one = input().split()
partner_two = input().split()

if len(partner_one) != len(set(partner_one)) or len(partner_two) != len(set(partner_two)):
    exit('bad')

d = {partner_one[q]:partner_two[q] for q in range(num)}

for q in range(num):
    if d[partner_two[q]] != partner_one[q]:
        exit('bad')

print('good')