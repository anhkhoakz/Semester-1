import sympy as sp

x = sp.symbols('x')


def right_leftLimit(fx):
    lm = sp.limit(fx, x, 0)
    print("Limit =", lm)
    lmRight = sp.limit(fx, x, 0, '+')
    print("Right limit =", lmRight)
    lmLeft = sp.limit(fx, x, 0, '-')
    print("Left limit =", lmLeft)


print("3.1")
right_leftLimit(1/(1+2**(1/x)))
sp.plot(1/(1+2**(1/x)), (x, -1000, 1000), line_color='black')
print("")

print("3.2")
right_leftLimit((x**2+x)/(sp.sqrt(x**3 + x**2)))
sp.plot((x**2+x)/(sp.sqrt(x**3 + x**2)), (x, -1000, 1000), line_color='pink')
