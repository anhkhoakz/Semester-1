import sympy as sp

# symbols
x = sp.symbols("x")
# y = f'(a)(x - a) + f(a)


def lineTangent(f, a):
    df = sp.diff(f, x)
    slope = df.subs(x, a)  # slope = f'(a)
    y_tangentLine = slope * (x - a) + f.subs(x, a)  # y = f'(a)(x - a) + f(a)
    sp.plot(f, y_tangentLine, (x, -5, 5))


# a
f = x * x + 1
a = 2
lineTangent(f, a)
# b
f = x - 2 * x * x
a = 1
lineTangent(f, a)
# c
f = x / (x - 2)
a = 3
lineTangent(f, a)
# d
f = 8 / (x * x)
a = 2
lineTangent(f, a)
# e
f = x ** (1/2)
a = 4
lineTangent(f, a)
# f
f = x * x * x + 3 * x
a = 1
lineTangent(f, a)
# g
f = 8 / ((x - 2) ** (1/2))
a = 6
lineTangent(f, a)
# h
f = 1 + (4 - x) ** (1/2)
a = 3
lineTangent(f, a)
