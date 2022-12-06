# -*- coding: utf-8 -*-
"""
Created on Fri Oct 23 13:42:43 2020

@author: scott
"""

import matplotlib.pyplot as plt
import numpy as np
import os
realMin = -1.5
realMax = 0.5
imagMin = -1.2
imagMax = 1.2
domain = [realMin, realMax, imagMin, imagMax]
while True:
    np.savetxt("domain.txt", domain)
    os.system("Mandelbrot.exe")
    nValuesText = np.loadtxt("nValues.txt")
    dR = domain[1] - domain[0]
    dI = domain[3] - domain[2]
    plt.figure(1)
    plt.clf()
    plt.imshow(nValuesText)
    plt.gca().set_aspect(dI/dR)
    plt.pause(0.001)
    newDomain = np.array(plt.ginput(2))
    newRealMin = min((dR/(nValuesText.shape[1]-1)) * newDomain[:,0] + domain[0])
    newRealMax = max((dR/(nValuesText.shape[1]-1)) * newDomain[:,0] + domain[0])
    newImagMin = min((dI/(nValuesText.shape[0]-1)) * newDomain[:,1] + domain[2])
    newImagMax = max((dI/(nValuesText.shape[0]-1)) * newDomain[:,1] + domain[2])
    domain = [newRealMin, newRealMax, newImagMin, newImagMax]
    