import sympy as sp
import math

x = sp.symbols('x')

# inf la vo cung


def limitFunc(fx, x1):
    lim = sp.limit(fx, x, x1)
    print('Limit =', str(lim))


print('Cau A')
limitFunc(abs(x**2-x-7), 3)

print('Cau B')
limitFunc((abs(x-1))/(x**2-1), 1)

print('Cau C')
limitFunc(math.e ** (1/x), 1)

print('Cau D')
limitFunc((x**4 - 16)/(x-2), 2)

print('Cau E')
limitFunc((x**3-x**2-5*x-3)/((x+1)**2), 1)

print('Cau F')
limitFunc((x**2-9)/(((x**2+7)**(1/2))-4), 3)

print('Cau G')
limitFunc((abs(x))/(sp.sin(x)), 1)

print('Cau H')
limitFunc((1-sp.cos(x))/(x*sp.sin(x)), 0)

print('Cau I')
limitFunc((2*x**2)/(3-3*sp.cos(x)), 0)

print('Cau J')
limitFunc(((3+x)/((-1+x))**x), sp.oo)

print('Cau K')
limitFunc((1-(2/((3+x)))**x), sp.oo)

print('Cau L')
limitFunc((1/x)**1/x, sp.oo)

print('Cau M')
limitFunc((-(x**(1/3)) + (1+x)**(1/3))/(-(x)**(1/3) + (1+x)**(1/2)), sp.oo)

print('Cau N')
limitFunc((sp.factorial(x)/(x**x)), sp.oo)
