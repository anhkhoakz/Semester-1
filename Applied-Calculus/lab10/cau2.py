# Exercise 2: Calculate the definite integrals and plot graphs of functions:
import sympy as sp

x, y = sp.symbols('x, y')

# cau c
g = x + 1
f = (1 + g.subs(x, x ** 2) + g.subs(x, x) ** 2) ** (1/2)
fin = sp.integrate(f, (x, 0, 3))
print("Definitive Integral of f(x) = {}".format(fin.evalf()))

# cau d
f = x ** 2 * y
fin = sp.integrate(f, (x, 0, 3), (y, 1, 2))
print("Definitive Integral of f(x) = {}".format(fin.evalf()))
