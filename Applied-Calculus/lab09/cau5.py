# Exercise 5: Write a program to implement Golden Search
# and apply to determinate minimum value of
# and illustrate on the graph/ table for each iteration.
import sympy as sp
import numpy as np
import matplotlib.pyplot as plt

x = sp.symbols("x")

a, b, e = -2, 1, 0.3
d = b - a


def f(x):
    return x * x


x_array = np.arange(a, b + 0.1, 0.1)
y_array = list(map(f, x_array))
plt.plot(x_array, y_array)

f = x * x
while d >= e:
    d *= 0.618
    x1 = b - d
    x2 = a + d
    if f.subs(x, x1) < f.subs(x, x2):
        b = x2
    else:
        a = x1
    plt.plot(x1, f.subs(x, x1), "rs")
    plt.plot(x2, f.subs(x, x2), "rs")

min = (f.subs(x, x1) + f.subs(x, x2))/2
print(min)
plt.grid()
plt.show()
