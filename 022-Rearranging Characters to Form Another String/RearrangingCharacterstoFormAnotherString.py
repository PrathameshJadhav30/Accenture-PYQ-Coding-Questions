def can_rearrange(s, t):
    return sorted(s) == sorted(t)

# Example usage
s = "listen"
t = "silent"
print(can_rearrange(s, t))