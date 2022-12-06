# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 11:58:18 2020

@author: scott
"""

import cv2
import matplotlib.pyplot as plot
import numpy as np

BGR = cv2.imread("folders00.jpg")
RGB = cv2.cvtColor(BGR, cv2.COLOR_BGR2RGB)
R = RGB[:,:,0]
G = RGB[:,:,1]
B = RGB[:,:,2]
plot.figure(1)
plot.clf()
plot.imshow(RGB)
plot.pause(0.001)
p = np.array(plot.ginput(4))
xVals = np.arange(0, RGB.shape[1])
yVals = np.arange(0, RGB.shape[0])
x,y = np.meshgrid(xVals,yVals)
Xc = (p[0,0] + p[1,0] + p[2,0] + p[3,0])/4
Yc = (p[0,1] + p[1,1] + p[2,1] + p[3,1])/4
for i in range(0,4):
    if(i == 3):
        m= (p[0][1] - p[3][1])/(p[0][0] - p[3][0])
        b = p[3][1] - (m * p[3][0])
    else:
        m = (p[i+1][1] - p[i][1])/(p[i+1][0] - p[i][0])
        b = p[i][1] - (m * p[i][0])
    if(Yc < m*Xc+b):
        R[y > m*x+b] = 0
        G[y > m*x+b] = 0
        B[y > m*x+b] = 0
    elif(Yc > m*Xc+b):
        R[y < m*x+b] = 0
        G[y < m*x+b] = 0
        B[y < m*x+b] = 0
imNew = RGB
imNew[:,:,0] = R
imNew[:,:,1] = G
imNew[:,:,2] = B
plot.figure(2)
plot.clf()
plot.imshow(imNew)
plot.figure(3)
plot.clf()
plot.subplot(3,1,1)
plot.hist(R[R > 0], color = 'r')
plot.axis([0, 255, 0, plot.axis()[3]])
plot.subplot(3,1,2)
plot.hist(G[G > 0], color = 'g')
plot.axis([0, 255, 0, plot.axis()[3]])
plot.subplot(3,1,3)
plot.hist(B[B > 0], color = 'b')
plot.axis([0, 255, 0, plot.axis()[3]])
rAvg = np.mean(R[R > 0])
gAvg = np.mean(G[G > 0])
bAvg = np.mean(B[B > 0])
if((rAvg < 125) and (gAvg > 150) and (bAvg < 175)):
    print("The folder is green.")
elif((rAvg > 225) and (gAvg > 200) and (bAvg < 175)):
    print("The folder is yellow.")
elif((rAvg > 225) and (gAvg > 100) and (bAvg < 100)):
    print("The folder is orange.")
elif((rAvg < 100) and (gAvg < 125) and (bAvg > 100)):
    print("The folder is blue.")
elif((rAvg < 150) and (gAvg < 125) and (bAvg > 125)):
    print("The folder is purple.")
plot.show()

