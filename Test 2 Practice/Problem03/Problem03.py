# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 11:22:13 2020

@author: haden
"""
import numpy as np
import matplotlib.pyplot as plt
#import matplotlib.figure as fig

print('urr')
x,y = np.meshgrid(np.linspace(0,2*np.pi,300),np.linspace(0,2*np.pi,300))
z=np.sin(x)*np.cos(y)
row,col=np.where(z==np.max(z))

print(str(row)+' '+str(col))


fig = plt.figure(3)
plt.clf()
ax = fig.gca(projection='3d')
p = ax.plot_surface(x,y,z,cmap='viridis',edgecolor='none')
fig.colorbar(p)
ax.scatter3D(x[row,col],y[row,col],z[row],[col],c='k',marker='*',s=80)
ax.set_aspect('equal')
ax.set_xlim(0,2*np.pi)
ax.set_ylim(0,2*np.pi)
ax.set_zlim(-1,1)