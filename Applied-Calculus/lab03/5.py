import matplotlib.pyplot as plt
import math
import numpy as np


def f_1(x):
    return math.sqrt(1-(abs(x)-1)**2)


def f_2(x):
    return -3*math.sqrt(1-math.sqrt(abs(x)/2))


def drawHeart(fx, colorDraw):
    x_array = np.arange(-2, 2, 0.00001)
    y_array = list(map(fx, x_array))
    plt.plot(x_array, y_array, color=colorDraw)


drawHeart(f_1, 'magenta')
drawHeart(f_2, 'red')

plt.grid()
plt.show()
