def sum_even_index_after_reverse(arr):
    reversed_arr = arr[::-1]
    total = 0

    for i in range(0, len(reversed_arr), 2):
        total += reversed_arr[i]

    return total

arr = [10, 20, 30, 40, 50, 60]
result = sum_even_index_after_reverse(arr)
print("Sum of even index after reverse:", result)