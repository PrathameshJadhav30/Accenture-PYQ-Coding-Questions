# Function to compute sum of binary digits
def sum_of_binary_digits(n):
    binary_str = bin(n)[2:]  # Convert to binary and remove '0b'
    return sum(int(digit) for digit in binary_str)


n = 15
print("Sum of binary digits:", sum_of_binary_digits(n))