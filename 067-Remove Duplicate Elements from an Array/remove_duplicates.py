def remove_duplicates(arr):
    seen = set()
    result = []
    for num in arr:
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result

# Test case
input_arr = [1, 2, 2, 3, 4, 4, 5]
output_arr = remove_duplicates(input_arr)
print("Output:", output_arr)