import random
import numpy as np

def mando():
    return random.randint(3,12)

Neo = np.matrix([[mando(), mando(),mando(),mando()],
    [mando(), mando(),mando(),mando()],
    [mando(), mando(),mando(),mando()],
    [mando(), mando(),mando(),mando()]])
print('The Random Matrix:\n',Neo)

b = np.sum(Neo)
print('\nSum of Random Matrix:\n',b)

o=0

for x in range(1,3):
    Neo[1,x] = o
    for x in range(1,3):
            Neo[2,x] = o
print(Neo)