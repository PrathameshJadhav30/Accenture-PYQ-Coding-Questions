def ProductSmallestPair(sum_value, arr):
    if len(arr) < 2:
        return -1

    arr.sort()
    a = arr[0]
    b = arr[1]

    if a + b <= sum_value:
        return a * b
    else:
        return 0

# Test Cases
arr1 = [3, 2, 1, 7, 5, 4]
sum1 = 3
print("Output:", ProductSmallestPair(sum1, arr1))  # Output: 2 (1*2)

arr2 = [1, 8, 0, 2, 3, 5, 6]
sum2 = 9
print("Output:", ProductSmallestPair(sum2, arr2))  # Output: 0 (0 + 1 > 9 is False => return 0)

arr3 = [10, 20, 30]
sum3 = 50
print("Output:", ProductSmallestPair(sum3, arr3))  # Output: 200 (10*20)

arr4 = []
sum4 = 5
print("Output:", ProductSmallestPair(sum4, arr4))  # Output: -1 (array too small)
