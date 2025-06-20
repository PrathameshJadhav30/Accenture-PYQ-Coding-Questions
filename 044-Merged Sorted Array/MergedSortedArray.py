def merge_sorted_arrays(arr1, arr2):
    merged = arr1 + arr2  # Combine both arrays
    merged.sort()         # Sort the merged array
    return merged

# Input arrays
arr1 = [1, 2, 3, 4, 5]
arr2 = [2, 4, 6, 8, 10]

# Output
result = merge_sorted_arrays(arr1, arr2)
print("Merged Sorted Array:", result)