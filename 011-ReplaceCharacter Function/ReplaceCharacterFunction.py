def replace_character(s: str, ch1: str, ch2: str) -> str:
    # Return None if the input is None
    if s is None:
        return None

    # If both characters are the same, return the original string
    if ch1 == ch2:
        return s

    # Check if ch1 or ch2 exist in the string
    found_ch1 = False
    found_ch2 = False

    for i in range(len(s)):
        if s[i] == ch1:
            found_ch1 = True
        elif s[i] == ch2:
            found_ch2 = True

    # If neither ch1 nor ch2 are present, return the original string
    if not found_ch1 and not found_ch2:
        return s

    # First pass: Replace ch1 with '#' (temporary), ch2 with ch1
    temp = []
    for i in range(len(s)):
        if s[i] == ch1:
            temp.append('#')  # temporary placeholder
        elif s[i] == ch2:
            temp.append(ch1)
        else:
            temp.append(s[i])

    # Second pass: Replace '#' with ch2
    for i in range(len(temp)):
        if temp[i] == '#':
            temp[i] = ch2

    # Construct the final string
    result = ""
    for i in range(len(temp)):
        result += temp[i]

    return result

# Example usage
s = "apples"
ch1 = 'a'
ch2 = 'p'

result = replace_character(s, ch1, ch2)

print("Original String:", s)
print("Characters to swap:", ch1, "and", ch2)
print("Modified String:", result)
