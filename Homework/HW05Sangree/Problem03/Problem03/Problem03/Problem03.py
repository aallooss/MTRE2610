import math
i = 0
while i < 1000:
    if math.pow(i,2.5)<1000000: 
        i += 1
    else:
        i-=1
        print(i)
        break