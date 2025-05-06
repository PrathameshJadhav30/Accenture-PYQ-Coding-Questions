def find_min_diff(arr, m):
    if len(arr) < m:
        return -1

    arr.sort()
    min_diff = float('inf')

    for i in range(len(arr) - m + 1):
        diff = arr[i + m - 1] - arr[i]
        min_diff = min(min_diff, diff)

    return min_diff


arr = [7, 3, 2, 4, 9, 12, 56]
m = 3
print("Minimum Difference is", find_min_diff(arr, m))