# Read the full line from input
line = input("Enter a string: ")

# Split the string into words
words = line.split()

# Reverse the list of words
reversed_words = words[::-1]

# Join the words back into a string
output = ' '.join(reversed_words)

print(output)