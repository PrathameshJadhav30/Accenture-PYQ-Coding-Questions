def encode_number(N):
    encoded = ''
    str_N = str(N)
    for i in range(len(str_N)):
        digit = int(str_N[i])
        square = digit * digit
        encoded += str(square)
    return int(encoded)

# Example usage:
input1 = 34
print(encode_number(input1))  # Output: 916