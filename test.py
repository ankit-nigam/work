import random
import math
import sys

sys.stdout = open('in', 'w')

print(int(5))
for i in range(1, 5):
  print(random.randint(1, 71), end = ' ')  

sys.stdout.close()