import random
import math
import numpy as np

def Obi():
    return random.uniform(0,1)
def Wan():
    return bool(Obi() < (math.sqrt(1-Obi()**2)))


counter = 0

pie = .314
simp = 0
outside = 0
area = 0


print("yuh")
while area != pie:
    if Wan():
        counter += 1
    else:
        outside += 1
    total = counter + outside
    simp = counter/total
    area = round(((simp*4))*100)
    area = area * .001
    print(total,area*10)

print("\nPi to three significant figures:",area*10, "\nTook",total,"iterations")
    
