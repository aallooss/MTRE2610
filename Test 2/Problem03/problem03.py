# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 11:07:59 2020

@author: haden
"""

import matplotlib.pyplot as plt
import matplotlib.image as image
im = image.imread('stinkbug.png')

fig = plt.figure()

ax = fig.add_subplot(1, 2, 1)
imgplot = plt.imshow(im, cmap='gray')
ax.set_title('The original')

#added two lines below  VVV
im[im < 0.4] -= 0.2
im[im > 0.6] += 0.2

ax = fig.add_subplot(1, 2, 2)
imgplot = plt.imshow(im, cmap='gray')
#changed line below  VVV
imgplot.set_clim()
ax.set_title('After modified')