import sympy as sp

x = sp.symbols("x")

r = 20000 * (1 - (1/x))

marginalRevenue = r.subs(x, 100)

print(marginalRevenue, "dollars")
