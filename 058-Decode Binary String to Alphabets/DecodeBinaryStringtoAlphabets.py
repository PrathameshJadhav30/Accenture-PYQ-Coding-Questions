def decode_binary_string(binary):
    result = ""
    count = 0
    
    for ch in binary:
        if ch == '1':
            count += 1
        else:
            if count > 0:
                result += chr(ord('A') + count - 1)
                count = 0
    # Handle trailing 1s
    if count > 0:
        result += chr(ord('A') + count - 1)
    
    return result

# Example usage
binary_input = input("Enter binary string: ")
decoded_output = decode_binary_string(binary_input)
print("Decoded Output:", decoded_output)