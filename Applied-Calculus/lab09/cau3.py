# Exercise 3: Given f(x) over a closed interval [a, b],
# find the absolute maximum and the absolute minimum
# for the following cases:

import sympy as sp

x = sp.symbols("x")


def absolute_min_max(f, start, end):
    derivative_f = sp.diff(f, x)
    critical_values = sp.solve(derivative_f, x)
    print("Critical values:", critical_values)

    for x_c in critical_values:
        if x_c < start or x_c > end:
            critical_values.remove(x_c)

    critical_values.extend([start, end])

    y_values = []

    for v in critical_values:
        y_values.append(f.subs(x, v))

    print('The absolute maximum is:', max(y_values))
    print('The absolute minimum is:', min(y_values))


# cau a
print("Cau a")
absolute_min_max(f=x ** 3 - 27 * x, start=0, end=5)

# cau b
print("Cau b")
absolute_min_max(f=(3 / 2) * x ** 4 - 4 * x ** 3 + 4, start=0, end=3)

# cau c
print("Cau c")
absolute_min_max(f=(1 / 2) * x ** 4 - 4 * x ** 2 + 5, start=1, end=3)

# cau d
print("Cau d")
absolute_min_max(f=(5 / 2) * x ** 4 - (20 / 3) * x ** 3 + 6, start=-1, end=3)
