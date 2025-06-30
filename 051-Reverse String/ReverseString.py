def reverse_string(s: str) -> str:
    if s is None:
        return None
    return s[::-1]

s = "hello"
result = reverse_string(s)
print("Reversed String:", result)