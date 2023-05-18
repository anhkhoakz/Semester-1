import numpy as np
import sympy as sp

x = sp.symbols('x')

f6a = (x**2-x-6)/(x-3)

# At point x = 0
lm_x_0 = sp.limit(f6a, x, 0)
if lm_x_0 == ((0**2-x-6)/(0-3)):
    print("fx is continuous at 0")

# Other points x != 0
for c in np.arange(-100, 100, 1):
    if c != 0:
        lm_x_c = sp.limit(f6a, x, c)
    if lm_x_0 == ((0**2-x-6)/(0-3)):
        print("fx is continuous at", c)

# f(x) is continuous for all x # 0, 3
