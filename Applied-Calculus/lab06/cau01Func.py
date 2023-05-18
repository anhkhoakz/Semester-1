import sympy as sp

x = sp.symbols('x')


def Derivative(f, cau):
    df = sp.diff(f, x)
    print("Cau", cau)
    print("Derivative of f(x) =", df)
    df2 = sp.diff(f, x, 2)
    print("Second Derivative of f(x) =", df2)


Derivative(4 - x * x, 'a')
Derivative((x - 1) ** 2 + 1, 'b')
Derivative(1/x**2, 'c')
Derivative((1 - x)/(2 * x), 'd')
Derivative((3 * x) ** (1/2), 'e')
Derivative((2 * x + 1) ** (1/2), 'f')
