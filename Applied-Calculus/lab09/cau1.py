# Exercise 1: Find the critical numbers (C.N) of f(x) for the following cases
import sympy as sp

x = sp.symbols("x")


def critical_values_func(f):
    derivative_f = sp.diff(f, x, 1)
    critical_values = sp.solve(derivative_f, x)
    print("Critical values of f(x):", critical_values)


# cau a
critical_values_func(f=3 * x ** 4 - 16 * x ** 3 + 18 * x ** 2 - 9)

# cau b
critical_values_func(f=(x + 2) / (2 * x ** 2))

# cau c
critical_values_func(f=-(x ** 2 / 3) + x ** 2 + 3 * x + 4)

# cau d
critical_values_func(f=(5 * x ** 2 + 5) / x)

# Critical numbers are x0 where f'(x0) = 0
