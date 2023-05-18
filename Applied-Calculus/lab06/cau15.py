import sympy as sp

t = sp.symbols("t")

s = 24 * t - 0.8 * t * t

time = input("Nhap thoi gian: ")

velocity = sp.diff(s, t)
acceleration = sp.diff(velocity, t)


velocityTime = round(velocity.subs(t, time), 2)
accelerationTime = round(acceleration.subs(t, time), 2)
print("Rock's velocity: {} and acceleration: {} at {}12".format(
    velocityTime, accelerationTime, time))

highestPoint = sp.solve(velocity, t)
print("Highest point: {}".format(highestPoint))
