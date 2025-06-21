def get_most_frequent_vowel(s: str) -> str:
    vowels = "aeiou"
    count = {v: 0 for v in vowels}

    for ch in s:
        ch = ch.lower()
        if ch in count:
            count[ch] += 1

    # Return vowel with max frequency
    return max(count, key=count.get)

# Input
n = int(input())
s = input()

# Output
print(get_most_frequent_vowel(s))