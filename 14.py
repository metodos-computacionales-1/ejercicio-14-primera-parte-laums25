import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure(1)

data = np.loadtxt("14.dat")

plt.plot(data[:,0], data[:,1])
plt.plot(data[:,1], data[:,2])
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("14.png")
