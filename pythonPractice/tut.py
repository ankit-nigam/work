import filecmp

def power(n, k):
    res = 1
    while k > 0:
        if k & 1:
            res = n * res
        k >>= 1
        n = n * n
    return res

readFile = open('input.txt', 'r').read()

n, k = map(int, readFile.split())

writeFile = open('output.txt', 'w')
writeFile.write(str(power(n, k)) + '\n')
writeFile.close()

show = filecmp.cmp('output.txt', 'correct.txt')

print(show)
