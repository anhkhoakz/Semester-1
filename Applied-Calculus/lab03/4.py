import matplotlib.pyplot as plt
import numpy as np
import math


def fx_4i(x):
    return -x**3


def fx_4j(x):
    return -1/(x**2)


def fx_4k(x):
    return -1/x


def fx_4l(x):
    return 1/abs(x)


def fx_4m(x):
    return math.sqrt(abs(x))


def fx_4n(x):
    return math.sqrt(abs(-x))


def showFunc(fx):
    x_array = np.arange(-10, 10.1, 0.1)
    y_array = list(map(fx, x_array))
    plt.plot(x_array, y_array)
    plt.grid()
    plt.show()


showFunc(fx_4i)


showFunc(fx_4j)


showFunc(fx_4k)


showFunc(fx_4l)


showFunc(fx_4m)


showFunc(fx_4n)
