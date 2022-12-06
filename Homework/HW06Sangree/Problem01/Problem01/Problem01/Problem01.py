import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0,2*np.pi,16)
y = 2*(np.sin(x))-3*(np.cos(x))

plt.plot(x,y, marker='^', markersize= 15, linewidth = 4, color = "k")
plt.show()