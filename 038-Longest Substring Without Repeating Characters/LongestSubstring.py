def length_of_longest_substring(s: str) -> int:
    char_index = {}
    max_len = 0
    start = 0

    for end, char in enumerate(s):
        if char in char_index and char_index[char] >= start:
            start = char_index[char] + 1  # Move start after last occurrence
        char_index[char] = end
        max_len = max(max_len, end - start + 1)
    
    return max_len

# Example usage:
s = "abcabcbb"
print("Length of longest substring:", length_of_longest_substring(s))  # Output: 3