def find_elevation_point(arr):
    N = len(arr)
    max_left = float('-inf')
    
    for i in range(N):
        max_left = max(max_left, arr[i])
        is_elevation = True
        for j in range(i + 1, N):
            if arr[j] > arr[i]:
                is_elevation = False
                break
        if max_left <= arr[i] and is_elevation:
            return arr[i]

print(find_elevation_point([1, 2, 3, 4, 3, 2, 1]))  # Output: 4
print(find_elevation_point([5, 3]))                # Output: 5