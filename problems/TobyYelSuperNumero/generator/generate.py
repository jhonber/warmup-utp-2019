from random import randint as rd

def generate (size):
  out = str(rd(1,9))
  for i in range(1, size):
    out += str(rd(0,9))
  print out

for i in range(0, 20):
  generate(rd(1, 10000))