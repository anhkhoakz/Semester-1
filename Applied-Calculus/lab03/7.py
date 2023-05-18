import matplotlib.pyplot as plt
import numpy as np


def f7_a(x):
    return x ** 3 - (x / 2)


def f7_b(x):
    return x ** 2 + (x / 2)


def drawFunc(fx, x1, x2):
    x = np.arange(x1, x2 + 0.1, 0.1)
    y = np.array(list(map(fx, x)))
    plt.grid()
    plt.plot(x, y)
    plt.show()


# 7a
plt.title('Cau 7a')
drawFunc(f7_a, -50, 50)
print("function f(x)_7a is one to one function")


# 7b
plt.title('Cau 7b')
drawFunc(f7_b, -50, 50)
print("function f(x)_7b is not one to one function")
