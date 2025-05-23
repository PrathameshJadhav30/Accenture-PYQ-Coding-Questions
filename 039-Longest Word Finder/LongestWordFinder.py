input_line = input("Enter words separated by spaces: ")
words = input_line.split()

longest = ""
for word in words:
    if len(word) > len(longest):
        longest = word

print("The longest string is:", longest)