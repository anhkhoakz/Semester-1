def factorial(n):
    result = 1
    for x in range(1, n + 1):
        result *= x
    return result

def factorial_recursion(n):
    if n < 2:
        return 1
    return n * factorial(n-1)

print(factorial_recursion(4))

