import sympy as sp

t = sp.symbols("t")

h = (t + 1) ** (1/2) + 5 * t ** (1/3)

time = 0
treeHeight = h.subs(t, time)
print("Tree's height when t = {}: {}".format(time, treeHeight))

time = 4
treeHeight = h.subs(t, time)
print("Tree's height when t = {}: {}".format(time, treeHeight))

time = 8
treeHeight = h.subs(t, time)
print("Tree's height when t = {}: {}".format(time, treeHeight))

heightAverage = 1/(8 - 0) * sp.integrate(h, (t, 0, 8))
print("Tree's average height: {}".format(heightAverage))
