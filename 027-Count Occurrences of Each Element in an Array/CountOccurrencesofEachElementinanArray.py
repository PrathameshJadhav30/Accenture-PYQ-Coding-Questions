from collections import Counter

arr = [10, 5, 10, 15, 10, 5]

# Count frequencies using Counter
frequency = Counter(arr)

# Print result
for key, value in frequency.items():
    print(f"{key} - {value}")