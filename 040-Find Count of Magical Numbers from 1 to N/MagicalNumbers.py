def is_magical(num):
    binary = bin(num)[2:]  # Remove '0b' prefix
    transformed = ''.join('1' if b == '0' else '2' for b in binary)
    digit_sum = sum(int(digit) for digit in transformed)
    return digit_sum % 2 == 1

def count_magical_numbers(N):
    return sum(1 for i in range(1, N + 1) if is_magical(i))

# Example
N = int(input("Enter a Number: "))
print(count_magical_numbers(N))