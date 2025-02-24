# Thought process
# A prime number is a number that's only divisible by 1 and itself.
# If a number is divisible by any other number, it's not a prime number.
# Now we are to find the prime number from a given number.

def is_prime(n: int) -> bool:
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

number = int(input("Enter a number: "))
if is_prime(number):
    print("Input is a prime number")
else:
    print("Input is not a prime number")
