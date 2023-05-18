import sympy as sp


def newton(f, x, x0, to1, n):
    df = sp.diff(f, x)

    for i in range(n):
        if abs(f.subs(x, x0)) < to1:
            return x0

        x_new = x0 - f.subs(x, x0) / df.subs(x, x0)
        if abs(x_new - x0) < to1:
            return x_new

        x0 = x_new

    return x0


x = sp.symbols('x')
f = x * x - 2 * x + 1
print("Cau a:", newton(f, x, 0, 1e-8, 1000))

f = x * x * x - 4
print("Cau a:", newton(f, x, 0, 1e-8, 1000))
