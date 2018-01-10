import random
import math
import sys
import string

sys.stdout = open('in', 'w')

x = int(input())
print(x)
for i in range(1, x + 1):
  print(random.randint(-5, 6), end = ' ')

sys.stdout.close()