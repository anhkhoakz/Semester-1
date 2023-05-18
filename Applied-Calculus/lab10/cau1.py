# Exercise 1: Calculate the definite integral of functions:
import sympy as sp

x = sp.symbols("x")


def definite_integral(f, start, end):
    f = x ** 3 + 2 * x ** 2 + 3
    fin = sp.integrate(f, x)
    print("Antiderivative of f(x) = {}".format(fin))

    fin = sp.integrate(f, (x, start, end))
    print("Definite integral of f(x) from {} to {} = {}".format(
        start, end, fin.evalf()))


# cau 1
definite_integral(f=x ** 3 + 2 * x ** 2 + 3, start=1, end=2)

# cau 2
definite_integral(f=1/(x**3) + 1/(x**2) + x * x ** (1/2), start=1, end=4)

# cau 3
definite_integral(f=(x ** 3 + x * x ** (1/2) + x) / (x ** 2), start=1, end=4)

# cau 4
definite_integral(f=2 / x + x ** 3, start=1, end=2)
