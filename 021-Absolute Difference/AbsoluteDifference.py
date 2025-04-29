def findCount(arr, num, diff):
    count = 0
    for val in arr:
        if abs(val - num) <= diff:
            count += 1
    return count if count > 0 else -1

# Sample usage
arr = [12, 3, 14, 56, 77, 13]
num = 13
diff = 2
print(findCount(arr, num, diff))