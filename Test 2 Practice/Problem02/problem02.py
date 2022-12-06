# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 11:07:59 2020

@author: haden
"""

import matplotlib.pyplot as plt
import matplotlib.image as image
im = image.imread('stinkboi.png')
mask = (im<0.1) | (im>0.39)
plt.figure(2)
plt.imshow(mask,cmap='gray')