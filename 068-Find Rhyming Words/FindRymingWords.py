def ends_with(word: str, suffix: str) -> bool:
    return word.endswith(suffix)

def find_rhymes(words: list, target: str, suffix_len: int = 3) -> list:
    if len(target) < suffix_len:
        return []

    suffix = target[-suffix_len:]
    rhymes = [word for word in words if word != target and word.endswith(suffix)]
    return rhymes

# Example usage
words = ["cat", "bat", "rat", "mat", "chat", "hat", "flat", "gnat"]
target = "flat"

rhyming_words = find_rhymes(words, target)

print(f"Words that rhyme with '{target}':", rhyming_words)