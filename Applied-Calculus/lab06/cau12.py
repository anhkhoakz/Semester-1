import sympy as sp

x = sp.symbols("x")

c = x ** 3 - 6 * x ** 2 + 15 * x

extraCost = c.subs(x, 11) - c.subs(x, 10)

print("It will cost", extraCost, "dollars to produce one more radiator a day")
