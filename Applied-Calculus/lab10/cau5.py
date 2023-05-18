# Exercise 5: Write a program to compute the displacement of the rock
# during the time period 0 ≤ t ≤ 8.
# Suppose that the velocity of the rock at any time t during its motion
# was given as v(t) = 160 − 32t ft/sec.

import sympy as sp

t = sp.Symbol('t')
v = 160 - 32 * t
vin = sp.integrate(v, (t, 0, 8))
print("Displacement of the rock: {}".format(vin))
