# Problem: Sum of First N Natural Numbers
# Write a function to calculate the sum of the first N natural numbers.

def sumOfNaturals(n):
    return n * (n + 1) // 2

result = sumOfNaturals(5)
print("Sum:", result)
