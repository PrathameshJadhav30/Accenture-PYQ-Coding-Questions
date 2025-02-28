def operations_binary_string(s: str) -> int:
    if not s:
        return -1
    result = int(s[0])
    for i in range(1, len(s), 2):
        op = s[i]
        num = int(s[i + 1])
        if op == 'A':
            result &= num
        elif op == 'B':
            result |= num
        elif op == 'C':
            result ^= num
    return result

# Test cases
print(operations_binary_string("1C0C1C1A0B1"))  # Output: 1
print(operations_binary_string("0C1A1B1C1C1B0A0"))  # Output: 0