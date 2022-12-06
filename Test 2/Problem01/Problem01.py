numbers = int(input('How many values do you want? '))
list_one = [0 for i in range(numbers)]
list_two = []
for i in range(numbers):
        num = float(input('Enter val #%d: ' % (i+1)))
        list_one[i] = num
        list_two.append(num)
print('The first list is ' + str(list_one))
print('The second list is ' + str(list_two))
    
