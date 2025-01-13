# Problem : Find the Maximum of Two Numbers
# Write a function that takes two numbers and returns the larger one.
def max(a, b):
    return a if a > b else b

result = max(6, 4)
print("Max: %d" % result) # or print("Max: ", result) or print(f'{result}')
