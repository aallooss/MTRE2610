import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

dumx = [0]
dumy = [0]
dumz = [15]

#also im using a .csv file because I couldnt get the txt to work
data = pd.read_csv('/Users/haden/Desktop/School/Sem_3/MTRE2610/Homework/HW08Sangree/Problem01Sangree/data.csv')
X = data.iloc[:, [0, 1, 2]].values

km = KMeans(n_clusters = 6)
y_kmeans = km.fit_predict(X)
fig = plt.figure()

ax1 = fig.add_subplot(111, projection='3d')
ax1.scatter(X[y_kmeans==0, 0], X[y_kmeans==0, 1], X[y_kmeans==0, 2], c='red', label ='Cluster 1')
ax1.scatter(X[y_kmeans==1, 0], X[y_kmeans==1, 1], X[y_kmeans==1, 2], c='blue', label ='Cluster 2')
ax1.scatter(X[y_kmeans==2, 0], X[y_kmeans==2, 1], X[y_kmeans==2, 2], c='green', label ='Cluster 3')
ax1.scatter(X[y_kmeans==3, 0], X[y_kmeans==3, 1], X[y_kmeans==3, 2], c='cyan', label ='Cluster 4')
ax1.scatter(X[y_kmeans==4, 0], X[y_kmeans==4, 1], X[y_kmeans==4, 2], c='magenta', label ='Cluster 5')
ax1.scatter(X[y_kmeans==5, 0], X[y_kmeans==5, 1], X[y_kmeans==5, 2], c='black', label ='Cluster 6')

print(X)


#DUMMY POINT vvvvvvvvv    (the dummy point was messing with the clusters so im not using it)
#ax1.scatter(dumx,dumy,dumz)


ax1.set_title("Kmeans Python Clusters")
ax1.set_xlabel('x axis')
ax1.set_ylabel('y axis')
ax1.set_zlabel('z axis')
ax1.set_xlim(-16,3)
ax1.set_zlim(0,15)
ax1.set_ylim(-4,12)

plt.show()
data.close()
