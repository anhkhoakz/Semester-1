# Exercise 2: Find the relative extrema using the second derivative test
# for the following cases:

import sympy as sp

x = sp.symbols("x")


def relative_extrema_func(f):
    first_derivative_f = sp.diff(f, x)
    second_derivative_f = sp.diff(first_derivative_f, x)
    critical_values = sp.solve(first_derivative_f, x)

    for c in critical_values:
        relative_extrema = second_derivative_f.subs(x, c)
        if relative_extrema > 0:
            print("f has a local minimum at {}".format(c))
        elif relative_extrema < 0:
            print("f has a local maximum at {}".format(c))
        else:
            print("f does not have relative extrema at {}".format(c))


# cau a
print("Cau a:")
relative_extrema_func(f=3 * x ** 4 - 16 * x ** 3 + 18 * x ** 2 - 9)

# cau b
print("Cau b:")
relative_extrema_func(f=(x + 2) / (2 * x ** 2))

# cau c
print("Cau c:")
relative_extrema_func(f=-(x ** 2 / 3) + x ** 2 + 3 * x + 4)

# cau d
print("Cau d:")
relative_extrema_func(f=(5 * x ** 2 + 5) / x)

'''
suppose: f'(c) = 0
f''(c) > 0 -> f has a local minimum at c
f''(c) < 0 -> f has a local maximum at c
'''
