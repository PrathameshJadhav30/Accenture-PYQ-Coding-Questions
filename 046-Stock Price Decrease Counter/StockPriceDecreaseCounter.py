def count_decreased_days(A):
    count = 0
    for i in range(1, len(A)):
        if A[i] < A[i - 1]:
            count += 1
    return count

# Example usage
A = [2, 3, 1, 4, 5, 2]
print(count_decreased_days(A))  # Output: 2