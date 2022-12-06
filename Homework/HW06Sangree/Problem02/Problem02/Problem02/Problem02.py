import matplotlib.pyplot as plt
import numpy as np
import math as ma
Iy = 736    #cm^4
Iz = 1584   #cm^4

M = 120     #Nm

My = -((M)*(ma.cos(0.786)))
Mz = -((M)*(ma.sin(0.786)))

y = 16      #Y cm
z = 10      #Z cm

#coords
ycoord = np.linspace(0,16,300)
zcoord = np.linspace(0,10,300)
ycoord,zcoord = np.meshgrid(ycoord,zcoord)

#function
stress = -(((Mz)*(ycoord))/Iz)+(((My)*(zcoord))/Iy)

fig = plt.figure(1)
plt.clf()
ax = fig.add_subplot(111, projection = "3d")
ax.plot_surface(ycoord, zcoord, stress)
plt.show()