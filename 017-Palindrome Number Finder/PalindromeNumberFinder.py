def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Input format: e.g., 10, 80
input_str = input()
lower, upper = map(int, input_str.split(','))

palindromes = []

for i in range(lower, upper + 1):
    if is_palindrome(i):
        palindromes.append(str(i))

# Join and print with commas, ending with a period
print(", ".join(palindromes) + ".")
