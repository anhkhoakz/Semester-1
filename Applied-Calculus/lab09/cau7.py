# y is maximize at x0 = 1 if f'(x0) = 0 and f''(x0) < 0

import sympy as sp

x, m = sp.symbols("x, m")
x0 = 1
f = x ** 3 - 3 * m * x * x + 3 * (m * m - 1) * x - (m * m - 1)

first_derivative_f = sp.diff(f, x, 1)
second_derivative_f = sp.diff(f, x, 2)

df_x = first_derivative_f.subs(x, x0)
d2f_x = second_derivative_f.subs(x, x0)

print(df_x, "----", d2f_x)
m1 = sp.solve(df_x, m)
m2 = sp.solve(d2f_x, m)

print(m1)
print(m2)

print("y is maximize at x0 = 1 when m > 1")
