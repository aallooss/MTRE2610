import numpy as np

class myMat():

    def __init__(self, row=None, col=None):
        if row != None and col != None:
            self.x = np.zeros([row, col], dtype = int)
        else:
            self.x = np.zeros([0, 0], dtype = int)

    def addValue(self, i, j, val):
        if self.x.shape[0] <= i and self.x.shape[1] <= j:
            y = self.x
            self.x = np.zeros([i+1, j+1], dtype = int)
            for k in range(y.shape[0]):
                for l in range(y.shape[1]):
                    self.x[k][l] = y[k][l]

        elif self.x.shape[0] <= i:
            y = self.x
            self.x = np.zeros([i+1, self.x.shape[1]], dtype = int)
            for k in range(y.shape[0]):
                for l in range(y.shape[1]):
                    self.x[k][l] = y[k][l]

        elif self.x.shape[1] <= j :
            y = self.x
            self.x = np.zeros([self.x.shape[0], j+1], dtype = int)
            for k in range(y.shape[0]):
                for l in range(y.shape[1]):
                    self.x[k][l] = y[k][l]

        self.x[i][j] = val

    def __mul__(self, other):
        return np.dot(self.x, other.x)

    def __str__(self):
        return np.array_str(self.x)

### vvv MAIN vvv ###
x = myMat() # Creates 0x0 array filled with zeros

print(x,'\n')

x.addValue(1,1,6) # Expands size of x as needed
print(x,'\n')

x.addValue(2,2,5)
x.addValue(1,0,4)
x.addValue(0,1,3)
x.addValue(2,0,20)
x.addValue(2,0,2) # Overwrite previous value of 20 in this place
print(x,'\n')


y = myMat(3,3) # Creates 3x3 array filled with zeros
print(y,'\n')

y.addValue(0,0,2)
y.addValue(0,1,3)
y.addValue(0,2,4)
y.addValue(1,0,5)
y.addValue(1,2,6)
y.addValue(2,1,7)
y.addValue(2,2,8)
print(y,'\n')
print(x*y)
