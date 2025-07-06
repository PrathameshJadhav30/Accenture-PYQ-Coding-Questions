# 🚩 Problem: Set Matrix Zeroes

Given an `m x n` integer matrix, if an element is 0, set its entire row and column to 0.

### ✅ Input:
matrix = [[1, 1, 1],
[1, 0, 1],
[1, 1, 1]]

### ✅ Output:
matrix = [[1, 0, 1],
[0, 0, 0],
[1, 0, 1]]


---

## ✅ C++ Code

```cpp
#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m, 1);
    vector<int> col(n, 1);

    // First pass: mark the rows and columns to be zeroed
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0) {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    // Second pass: set zeros based on markers
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(row[i] == 0 || col[j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for(const auto& row : matrix) {
        for(int val : row)
            cout << val << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    cout << "Updated Matrix:\n";
    printMatrix(matrix);

    return 0;
}
```
# ✅ Python Code
```
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
```