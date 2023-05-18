#   Exercise 4: Graphing of these functions
# and calculating the area under curve of each function f(x):

#   To find the area bounded between y = f(x) and the x - axis,
# we shall evaluate the definite integral of |f(x)| instead

# Note: Define interval value to plot graph

import sympy as sp
import numpy as np
import matplotlib.pyplot as plt

x = sp.symbols('x')

f = x ** 2 * sp.cos(x)
f_abs = abs(f)
fin = sp.integrate(f_abs, (x, -4, 9))

print("Definitive Integral of f(x) = {}".format(fin.evalf()))
