import numpy as np
print("Test 02 Problem 2")
fp = open("test02.txt")
data = []
max_num = 0
total = 0

for row in fp.readlines():
    cols = list(map(float, row.strip().split()))
    total+=np.sum(cols)    
    max_row = max(cols)
    data.append(cols)
    if max_row>max_num:
        max_num = max_row

fp.close()
print("Sum of elements is " + str(total))
print("maximum is "+str(max_num)+".")
print("Maximum occurs in")
print("row col")
total = 0
i = 0
for row in data:
    j = 0
    for col in row:
        if col == max_num:
            total = i + j + total
            print(str(i)+"   "+str(j))
        j+=1
    i+=1