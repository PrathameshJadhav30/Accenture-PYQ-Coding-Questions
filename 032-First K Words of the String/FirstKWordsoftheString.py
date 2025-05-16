def print_first_k_words(sentence, k):
    words = sentence.split()
    print(' '.join(words[:k]))

# Example usage
sentence = "Hello I am a passionate developer"
k = 4
print_first_k_words(sentence, k)