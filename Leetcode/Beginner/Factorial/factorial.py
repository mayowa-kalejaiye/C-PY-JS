# Question 2: Factorial of a Number
# Write a function to calculate the factorial of a number.

def factorial(n):
    if n == 0: 
        return 1
    return n * factorial(n - 1)

result = factorial(5)
print("factorial", result)
