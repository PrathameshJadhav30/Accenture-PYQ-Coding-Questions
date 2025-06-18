def find_max_element(arr):
    max_element = arr[0]
    index = 0

    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
            index = i
    return max_element, index


arr = [1, 8, 4, 9, 6]
result = find_max_element(arr)
print("Maximum Element:", result[0])
print("Index:", result[1])