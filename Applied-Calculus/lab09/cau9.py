import sympy as sp

x1, x2 = sp.symbols('x1, x2')
f = x1 * x1 + x2 * x2 - 4 * x1 - 4 * x2
dfx1 = sp.diff(f, x1)
dfx2 = sp.diff(f, x2)
x1_cvals = sp.solve(dfx1, x1)
x2_cvals = sp.solve(dfx2, x2)

print(x1_cvals)
print(x2_cvals)
