def is_vowel(ch):
    return ch.lower() in 'aeiou'

def factorial(n):
    return 1 if n <= 1 else n * factorial(n - 1)

def count_permutations_with_fixed_vowels(s):
    consonants = [ch for ch in s if not is_vowel(ch)]
    return factorial(len(consonants))

# Input and Output
s = input("Enter a string: ")
result = count_permutations_with_fixed_vowels(s)
print("Output:", result)