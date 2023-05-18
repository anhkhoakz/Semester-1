# Exercise 4: Determine the minima or maxima
# of the functions f(x) following:
import sympy as sp
import numpy as np
import matplotlib.pyplot as plt


def f(x):
    return x ** 2 - 2 * x - 5


x_array = np.arange(-10, 10.1, 0.1)
y_array = list(map(f, x_array))
plt.plot(x_array, y_array)

x = sp.symbols("x")
f = x ** 2 - 2 * x - 5
first_derivative_f = sp.diff(f, x)
second_derivative_f = sp.diff(first_derivative_f, x)
critical_values = sp.solve(first_derivative_f, x)

for c in critical_values:
    y_values = f.subs(x, c)
    relative_extrema = second_derivative_f.subs(x, c)
    if relative_extrema > 0:
        print("f has a local minimum at ({}, {})".format(c, y_values))
        plt.plot(c, y_values, "rs")
    elif relative_extrema < 0:
        print("f has a local maximum at ({}, {})".format(c, y_values))
        plt.plot(c, y_values, "rs")
    else:
        print("f does not have relative extrema at ({}, {})".format(c, y_values))

plt.grid()
plt.show()
