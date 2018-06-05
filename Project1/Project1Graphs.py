import matplotlib
import matplotlib.pyplot as plt
import numpy as np

# function variables
precision = 100
inputs = [3,5]
waveLabel = ""
def graphWaves(x):
    multiples = 1;
    for wave in range(0,len(inputs)):
        multiples *= np.sin((x * np.pi) / inputs[wave])
    return multiples
def graphLabels(label):
    label = ""
    for wave in range(0,len(inputs)):
        label += "sin((PI*x)/" + str(inputs[wave]) + ") * "
    label += "1"
    print(label)
    return label

# graph variables
xRange = 30.0
xAxis, yAxis = [0,0]
fig, ax = plt.subplots()
def zeros(range):
    x = 0
    while x < range:
        if np.round_(graphWaves(x)*precision) == 0:
            ax.plot(x,graphWaves(x),'ro')
        x += 1
def graphUpdate():
    ax.set(xlabel='x', ylabel='inputs', title='0s of sin((PI*x)/inputs)')
    plt.axhline(0, color='black')
    plt.grid()
    xAxis = np.arange(0.0, xRange,0.01)
    yAxis = graphWaves(xAxis)
    ax.plot(xAxis, yAxis, label = graphLabels(waveLabel))
    plt.legend(bbox_to_anchor=(0.01, 0.99), loc=2, borderaxespad=0.)
    zeros(xRange+1)

# graphs
graphUpdate()
fig.savefig("images/Euler1Graph1.png")

inputs = [3,5,15]
graphUpdate()
fig.savefig("images/Euler1Graph2.png")

plt.clf()
fig, ax = plt.subplots()

inputs = [5,7]
graphUpdate()
fig.savefig("images/Euler1Graph3.png")

inputs = [5,7,9]
graphUpdate()
fig.savefig("images/Euler1Graph4.png")

plt.show()
