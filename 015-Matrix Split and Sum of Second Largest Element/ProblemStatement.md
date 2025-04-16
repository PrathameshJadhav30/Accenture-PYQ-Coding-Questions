# Matrix Split and Sum of Second Largest Element

## Problem Statement

You are required to:

1. Input the size of the matrix.
2. Input the elements of the matrix.
3. Divide the matrix into two submatrices — even and odd — based on their index positions:
   - Elements at even indices (0, 2, 4, ...) go into the **even matrix**.
   - Elements at odd indices (1, 3, 5, ...) go into the **odd matrix**.
4. Sort both the **even** and **odd** matrices in ascending order.
5. Find and print the **sum of the second largest element** from each sorted matrix.

## Input Format

- An integer `n` representing the size of the matrix.
- `n` integers representing the matrix elements.

## Output Format

- Print the sorted even-indexed array.
- Print the sorted odd-indexed array.
- Print the sum of the second largest elements from both arrays.

## Example
```
Enter the size of array: 5
Enter element at 0 index: 3
Enter element at 1 index: 4
Enter element at 2 index: 1
Enter element at 3 index: 7
Enter element at 4 index: 9
Sorted even array: 1 3 9
Sorted odd array: 4 7
7
```

## C++ Implementation

```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> evenIndex, oddIndex;
    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter element at " << i << " index: ";
        cin >> val;

        if (i % 2 == 0)
            evenIndex.push_back(val);
        else
            oddIndex.push_back(val);
    }

    sort(evenIndex.begin(), evenIndex.end());
    sort(oddIndex.begin(), oddIndex.end());

    cout << "Sorted even array: ";
for (int i = 0; i < evenIndex.size(); i++)
    cout << evenIndex[i] << " ";
cout << endl;

cout << "Sorted odd array: ";
for (int i = 0; i < oddIndex.size(); i++)
    cout << oddIndex[i] << " ";
cout << endl;

   int secondLargestEven;
if (evenIndex.size() >= 2)
    secondLargestEven = evenIndex[evenIndex.size() - 2];
else
    secondLargestEven = 0;

// Get the second largest element from sorted odd array (if exists)
int secondLargestOdd;
if (oddIndex.size() >= 2)
    secondLargestOdd = oddIndex[oddIndex.size() - 2];
else
    secondLargestOdd = 0;
    cout << secondLargestEven + secondLargestOdd << endl;

    return 0;
}

```
## Python Implementation
```
n = int(input("Enter the size of array: "))

even_index = []
odd_index = []

for i in range(n):
    val = int(input(f"Enter element at {i} index: "))
    if i % 2 == 0:
        even_index.append(val)
    else:
        odd_index.append(val)

even_index.sort()
odd_index.sort()

print("Sorted even array:", *even_index)
print("Sorted odd array:", *odd_index)

second_largest_even = even_index[-2] if len(even_index) >= 2 else 0
second_largest_odd = odd_index[-2] if len(odd_index) >= 2 else 0

print(second_largest_even + second_largest_odd)

```
# Notes
If any sub-matrix has fewer than 2 elements, its second largest is considered 0.

The program uses 0-based indexing throughout.

Sorting is done in ascending order, and second largest is the second last element after sorting.

