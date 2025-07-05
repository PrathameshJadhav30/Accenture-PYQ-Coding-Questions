def find_second_largest(arr):
    if len(arr) < 2:
        return None

    first = second = float('-inf')

    for num in arr:
        if num > first:
            second = first
            first = num
        elif first > num > second:
            second = num

    return second if second != float('-inf') else None

# Example usage
arr = [12, 35, 1, 10, 34, 1]
result = find_second_largest(arr)

if result is not None:
    print(f"Second largest = {result}")
else:
    print("No second largest element found.")