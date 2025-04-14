def count_exponent_of_2(n):
    count = 0
    while n % 2 == 0:
        count += 1
        n //= 2
    return count

# Function to find number with maximum exponent of 2 in the range [a, b]
def MaxExponents(a, b):
    max_num = a
    max_exp = count_exponent_of_2(a)

    for i in range(a + 1, b + 1):
        current_exp = count_exponent_of_2(i)
        if current_exp > max_exp or (current_exp == max_exp and i < max_num):
            max_exp = current_exp
            max_num = i
    return max_num

a = 7
b = 12
result = MaxExponents(a, b)
print("Number with maximum exponent of 2:", result)