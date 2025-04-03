def LargeSmallSum(arr):
    if len(arr) <= 3:
        return 0  # Constraint check

    even_pos = [arr[i] for i in range(0, len(arr), 2)]  # Elements at even indices
    odd_pos = [arr[i] for i in range(1, len(arr), 2)]   # Elements at odd indices

    if len(even_pos) < 2 or len(odd_pos) < 2:
        return 0  # Not enough elements to find second largest/smallest

    even_pos.sort()
    odd_pos.sort()

    second_largest_even = even_pos[-2]  # Second largest in even positions
    second_smallest_odd = odd_pos[1]  # Second smallest in odd positions

    return second_largest_even + second_smallest_odd  # Return sum

# Test Cases
arr1 = [3, 2, 1, 7, 5, 4]
print("Output:", LargeSmallSum(arr1))  # Expected Output: 7

arr2 = [1, 8, 0, 2, 3, 5, 6]
print("Output:", LargeSmallSum(arr2))  # Expected Output: 8

arr3 = [10, 20, 30]
print("Output:", LargeSmallSum(arr3))  # Expected Output: 0

arr4 = []
print("Output:", LargeSmallSum(arr4))  # Expected Output: 0
