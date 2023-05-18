# The margin cost of printing a poster when
# x posters have been printed is 1/(2 * x ** (1/2)) (dollars).
# Write a program to find c(100) − c(1),
# the cost of printing posters 2-100.
import sympy as sp

x = sp.symbols("x")

f = 1/(2 * x ** (1/2))
fin = sp.integrate(f, (x, 1, 100))
print("The margin cost of printing a poster: {}".format(fin))
