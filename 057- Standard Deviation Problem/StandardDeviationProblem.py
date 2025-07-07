import math

# Sample data
nums = [10, 20, 30, 40, 50]

# Calculate mean
mean = sum(nums) / len(nums)

# Calculate variance
variance = sum((x - mean) ** 2 for x in nums) / len(nums)

# Standard deviation
std_deviation = math.sqrt(variance)

print("Standard Deviation:", round(std_deviation, 4))