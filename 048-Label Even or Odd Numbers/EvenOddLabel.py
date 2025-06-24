def label_even_odd(arr):
    result = []
    for num in arr:
        if num % 2 == 0:
            result.append("even")
        else:
            result.append("odd")
    return " ".join(result)

# Driver Code
N = 6
arr = [1, 2, 3, 4, 5, 6]

output = label_even_odd(arr)
print(output)  # Output: odd even odd even odd even