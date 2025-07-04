def rotate(nums, k):
    n = len(nums)
    k = k % n  # Handle k > n
    nums[:] = nums[-k:] + nums[:-k]

# Test Input
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3

rotate(nums, k)
print("Rotated Array:", nums)