import matplotlib.pyplot as plt
import numpy as np
import math


def f6_a(x, k):
    return x ** 2 + k


def f6_b(x, k):
    return (x + k) ** 2


def f6_c(x, k):
    return k * math.sqrt(x)


def f6_d(x):
    return x ** 3


def f6_e(x):
    return x ** (2/3)


def f6_f(x):
    return (1/2)*(x+1) + 5


def f6_g(x):
    return 1/(x**2)


def f6_h(x):
    return 1 - (x**3)


def f6_i(x):
    return math.sqrt(x + 1)


def f6_j(x):
    return math.sqrt(x + 1)


def showFunc():
    plt.legend()
    plt.show()


def loopsFunc(fx, x, k):
    for ki in k:
        y = []
        for xi in x:
            y.append(fx(xi, ki))
        plt.plot(x, y, label="k = " + str(ki))


k = [2, 4, 6, 8, 10, 12]
x = np.arange(-10, 10, 0.1)

loopsFunc(f6_a, x, k)
plt.title("Cau 6a")
showFunc()


k = [2, 4, 6, 8, 10, 12]
x = np.arange(-10, 10, 0.1)

loopsFunc(f6_b, x, k)
plt.title("Cau 6b")
showFunc()


k = [1/3, 1, 3, 6]
x = np.arange(1, 50, 0.1)

loopsFunc(f6_c, x, k)
plt.title('Cau 6c')
showFunc()


x = np.arange(1, 50, 0.1)
y = np.array(list(map(f6_d, x)))

plt.plot(x, y, label='base')
plt.plot(x + 1, y - 1, label='left 1, down 1')

plt.title('Cau 6d')
showFunc()


x = np.arange(-10, 10, 0.1)
y = np.array(list(map(f6_e, x)))

plt.plot(x, y, label='base')
plt.plot(x-1, y-1, label='right 1, down 1')

plt.title('Cau 6e')
showFunc()


x = np.arange(-10, 10, 0.1)
y = np.array(f6_f(x))

plt.plot(x, y, label='base')
plt.plot(x - 1, y - 5, label='down 5, right 1')

plt.title('Cau 6f')
showFunc()


x = np.arange(-10, 10, 0.1)
y = np.array(f6_g(x))

plt.plot(x, y, label='base')
plt.plot(x + 2, y - 1, label='left 2, down 1')

plt.title('Cau 6g')
showFunc()


x = np.arange(-10, 10, 0.1)
y = np.array(list(map(f6_h, x)))
y2 = np.array(list(map(f6_h, x/2)))

plt.plot(x, y, label='base')
plt.plot(x, y2, label='stretched horizontally by a factor of 2')

plt.title('Cau 6h')
showFunc()


x = np.arange(0, 20, 0.1)
y = np.array(list(map(f6_i, x)))
y2 = np.array(list(map(f6_i, x*4)))

plt.plot(x, y, label='base')
plt.plot(x, y2, label='compressed horizontally by a factor of 4')

plt.title('Cau 6i')
showFunc()


x = np.arange(0, 20, 0.1)
y = np.array(list(map(f6_j, x)))

plt.plot(x, y, label='base')
plt.plot(x, y*3, label='stretched vertically by a factor of 3')

plt.title('Cau 6j')
showFunc()
