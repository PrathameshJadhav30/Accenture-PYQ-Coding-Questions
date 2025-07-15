# Function to check if a number is prime
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to return sum of all primes less than n
def sum_of_primes(n):
    return sum(i for i in range(2, n) if is_prime(i))

# Example
n = int(input("Enter a number: "))
print("Sum of primes less than", n, "is:", sum_of_primes(n))