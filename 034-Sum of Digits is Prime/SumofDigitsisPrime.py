def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

# Function to calculate the sum of digits
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

# Input and output logic
n = int(input("Enter a Number: "))
digit_sum = sum_of_digits(n)
if is_prime(digit_sum):
    print("YES")
else:
    print("NO")