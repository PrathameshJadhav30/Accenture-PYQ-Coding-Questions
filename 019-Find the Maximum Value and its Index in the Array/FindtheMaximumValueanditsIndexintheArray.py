def MaxInArray(arr):
    max_val = arr[0]
    max_index = 0

    for i in range(1, len(arr)):
        if arr[i] > max_val:
            max_val = arr[i]
            max_index = i

    print(max_val)
    print(max_index)

arr = [23, 45, 82, 27, 66, 12, 78, 13, 71, 86]
MaxInArray(arr)