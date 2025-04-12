def number_of_carries(num1, num2):
    carry = 0
    carry_count = 0

    while num1 > 0 or num2 > 0:
        digit1 = num1 % 10
        digit2 = num2 % 10

        total = digit1 + digit2 + carry

        if total >= 10:
            carry = total // 10
            carry_count += 1
        else:
            carry = 0

        num1 //= 10
        num2 //= 10

    return carry_count

# Example Usage
num1 = 451
num2 = 349
print(f"Number of carries: {number_of_carries(num1, num2)}")
