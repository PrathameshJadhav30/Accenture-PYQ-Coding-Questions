def DectoNBase(n, num):
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    if num == 0:
        return "0"
    result = ""
    while num:
        result = digits[num % n] + result
        num //= n
    return result

# Test Cases
print("Base 12, Number 718 =>", DectoNBase(12, 718))   # Output: 4BA
print("Base 21, Number 5678 =>", DectoNBase(21, 5678)) # Output: CI8