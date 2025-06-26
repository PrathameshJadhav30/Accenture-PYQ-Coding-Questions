def rearrange_bits(n):
    # Count set bits in binary representation
    count = bin(n).count('1')
    # Create minimum number with that many set bits (e.g., 0011)
    return (1 << count) - 1

# Test cases
print(rearrange_bits(10))  # Output: 3
print(rearrange_bits(2))   # Output: 1