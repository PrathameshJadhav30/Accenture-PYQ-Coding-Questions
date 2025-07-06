def setZeroes(matrix):
    m = len(matrix)
    n = len(matrix[0])
    row = [1] * m
    col = [1] * n

    # First pass: mark rows and columns that need to be zeroed
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == 0:
                row[i] = 0
                col[j] = 0

    # Second pass: set the elements to 0
    for i in range(m):
        for j in range(n):
            if row[i] == 0 or col[j] == 0:
                matrix[i][j] = 0

# Driver Code
matrix = [
    [1, 1, 1],
    [1, 0, 1],
    [1, 1, 1]
]

setZeroes(matrix)

print("Updated Matrix:")
for row in matrix:
    print(row)