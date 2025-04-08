def MoveHyphen(s: str) -> str:
    if s is None:
        return None

    hyphen_part = ''
    other_part = ''

    for char in s:
        if char == '-':
            hyphen_part += '-'
        else:
            other_part += char

    return hyphen_part + other_part

# Sample usage
s = "Move-Hyphens-to-Front"
print(MoveHyphen(s))
