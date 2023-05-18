import sympy as sp
import math

x = sp.symbols("x")

c = 1
lm = sp.limit((x**2-7), x, c)
print("Limit =", lm)
fx = c**2-7
print('f(x) =', fx)

if lm == fx:
    print("Function is contious at", c)
else:
    print("Function is not contious at", c)

c = 2
lm = sp.limit(sp.sqrt(2*x-3), x, c)
print("Limit =", lm)
fx = math.sqrt(2*c-3)
print('f(x) =', fx)

if lm == fx:
    print("Function is contious at", c)
else:
    print("Function is not contious at", c)
