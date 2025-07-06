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