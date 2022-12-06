import numpy as np
import torch
import matplotlib as plt
from mpl_toolkits.mplot3d import Axes3D

class Net(torch.nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.fc1 = tprch.nn.Linear(2,1)
        self.sigmoid = torch.nn.Sigmoid()
    def forward(self, x):
        return self.sigmoid(self.fc1(x))

data = np.load('data.txt')
x = data[:,0]
y = data[:,1]

data = np.reshape(data,(1,4,2))
data = torch.Tensor(data, dtype=torch.float)
labels = [0,0,1,1]
labels = np.reshape(labels,(1,4,2))
labels = torch.Tensor(labels,dtype=torch.float)

res = 500
xGrid, yGrid = np.meshgrid(np.linspace(0,1,res), np.linspace(0,1,res))

domainData = np.column_stack((np.reshape(xGrid,(res*res,)),
                              np.reshape(yGrid,(res*res,))))
model = Net()
criterion = torch.optim.SGB(model.parameters(),lr=10)
for i in range(100):
    optimizer.zero_grad()
    prediction = model(data)
    loss = criterion(prediction, labels)
    loss.backward()
    optimizer.step()
print(loss.item())
output = model(domainData)
output = output.detach().numpy()
output = np.reshape(output,(res,res))

fig = plt.figure(1)
plt.clf()
ax = fig.gca(projection='3d')
ax.plot_surface(x[0:2],y[0:2],[2,2],color='m')
ax.plot_surface(x[2:4],y[2:4],[2,2],color='c')
plt.xlabel('x')
plt.ylabel('y')
ax.view_init(90,-90)
plt.pause(0.001)
print(prediction)
