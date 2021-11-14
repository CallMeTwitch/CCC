# PASSED

word1, word2 = list(input()), list(input())

n = 0
while word2.count('*') != len(word2):
    if word2[n] == '*':
        n += 1
    elif word2[n] in word1:
        word1.remove(word2.pop(n))
    else:
        exit('N')
print('A')