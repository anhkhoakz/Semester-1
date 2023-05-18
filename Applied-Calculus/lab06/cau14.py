import sympy as sp

t = sp.symbols("t")

b = (10 ** 6) + ((10 ** 4) * t) - ((10 ** 3) * (t ** 2))

time = 0
growthRates = b.subs(t, time)
print("Growth rates at", time, "hour =", growthRates)

time = 5
growthRates = b.subs(t, time)
print("Growth rates at", time, "hours =", growthRates)

time = 10
growthRates = b.subs(t, time)
print("Growth rates at", time, "hours =", growthRates)
