import sympy as sp

x = sp.symbols('x')


def leftLimit(fx):
    lmLeft = sp.limit(fx, x, 0, '-')
    print("Left limit =", lmLeft)


def rightLimit(fx):
    lmRight = sp.limit(fx, x, 0, '+')
    print("Right limit =", lmRight)


def Limit(fx):
    lm = sp.limit(fx, x, 0)
    print("Limit =", lm)


leftLimit(0)
rightLimit(sp.sin(1/x))

print("Does not exist right limit")

sp.plot(sp.sin(1/x), (x, -1000, 1000), line_color='purple')
