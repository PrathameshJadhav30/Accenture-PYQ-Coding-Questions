def FindAutoCount(n):
    if n is None:
        return 0

    count = [0] * 10
    seen = [0] * 10  # To track which digits are already counted as unique
    unique = 0
    length = len(n)

    # Count frequency and prepare unique digit count in one pass
    for i in range(length):
        digit = int(n[i])
        count[digit] += 1
        if seen[digit] == 0:
            unique += 1
            seen[digit] = 1

    # Check autobiographical condition
    for i in range(length):
        if int(n[i]) != count[i]:
            return 0

    return unique

# Example usage
n = "1210"
print(FindAutoCount(n))  # Output: 3
