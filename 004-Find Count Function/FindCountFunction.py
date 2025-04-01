def find_count(arr, num, diff):
    count = 0
    for element in arr:
        if abs(element - num) <= diff:
            count += 1
    return count if count > 0 else -1

# Example usage
arr = [12, 3, 14, 56, 77, 13]
num = 13
diff = 2

print(f"Count of elements satisfying the condition: {find_count(arr, num, diff)}")
