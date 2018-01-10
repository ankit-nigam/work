from random import randint
import math
import sys

sys.stdout = open('in', 'w')

print(int(1000))
for i in range(1, 1001):
  for j in range(1, 6):
    print(randint(1, 1001), end = ' ')
  print()

sys.stdout.close()