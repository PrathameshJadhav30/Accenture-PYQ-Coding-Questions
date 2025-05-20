def length_of_last_word(s : str) -> int:
    words = s.strip().split()

    if not words:
        return 0
    
    return len(words[-1])

s = "  I am  a Passionate  Developer  "
print(length_of_last_word(s))