def find_missing_number(arr, n):
    total = n * (n + 1) // 2  # Expected sum from 1 to n
    return total - sum(arr)  # Missing number is the difference

# Example usage
arr = [1, 2, 4, 5, 6]
n = 6
print("Missing Number:", find_missing_number(arr, n))