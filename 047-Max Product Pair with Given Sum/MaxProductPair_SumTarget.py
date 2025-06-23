def max_product_pair_with_sum(arr, target):
    seen = set()
    max_product = -1
    result = []

    for num in arr:
        complement = target - num
        if complement in seen:
            product = num * complement
            first, second = max(num, complement), min(num, complement)
            if product > max_product:
                max_product = product
                result = [first, second]
        seen.add(num)

    return result

# Test case
arr = [11, 1, 2, 8, 10, 11, 15, 7]
target = 18

result = max_product_pair_with_sum(arr, target)
print(result if result else "No valid pair found")