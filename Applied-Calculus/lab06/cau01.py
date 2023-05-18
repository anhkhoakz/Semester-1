import sympy as sp

# symbols
x = sp.symbols('x')
z = sp.symbols('z')
t = sp.symbols('t')

# cau a
f = 4 - x * x

df = sp.diff(f, x)
print("1a")
print("Derivative of f(x) =", df)

df2 = sp.diff(f, x, 2)
print("Second Derivative of f(x) =", df2)

# cau b
f = (x - 1) ** 2 + 1

df = sp.diff(f, x)
print("1b")
print("Derivative of f(x) = ", df)

df2 = sp.diff(f, x, 2)
print("Second Derivative of f(x) =", df2)

# cau c
g = 1/t**2

dg = sp.diff(g, t)
print("1c")
print("Derivative of g(t) =", dg)

dg2 = sp.diff(g, t, 2)
print("Second Derivative of g(t) =", dg2)

# cau d
k = (1 - z)/(2 * z)

dk = sp.diff(k, z)
print("1d")
print("Derivative of k(z) =", dk)

dk2 = sp.diff(k, z, 2)
print("Second Derivative of k(z) =", dk2)

# cau e
k = (3 * z) ** (1/2)

dk = sp.diff(k, z)
print("1e")
print("Derivative of k(z) =", dk)

dk2 = sp.diff(k, z, 2)
print("Second Derivative of k(z) =", dk2)

# cau f
k = (2 * z + 1) ** (1/2)

dk = sp.diff(k, z)
print("1f")
print("Derivative of k(z) =", dk)

dk2 = sp.diff(k, z, 2)
print("Second Derivative of k(z) =", dk2)
