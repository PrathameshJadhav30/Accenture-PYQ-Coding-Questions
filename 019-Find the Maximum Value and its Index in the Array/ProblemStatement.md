# Problem: Find the Maximum Value and its Index in the Array

## Problem Statement

You are given a function:

```
void MaxInArray(int arr[], int length);

```
The function accepts an integer array arr of size length as its argument. Implement the function to find the maximum element of the array and print the maximum element and its index to the standard output (STDOUT).

**Input**

A list of integers, e.g.:
23 45 82 27 66 12 78 13 71 86

**Output**

Print the maximum element of the array

Print the index (starting from 0) of the maximum element

Both values should be printed on separate lines

## Note
The maximum element and its index should be printed in separate lines.

Do not print additional messages.

It is assumed there is only one maximum element.

## Example
**Input**

23 45 82 27 66 12 78 13 71 86

**Output**

86

9

**Explanation**

The maximum element in the array is 86.

Its index in the array is 9.

# Implementation
## ✅ C++ Solution
```
#include <iostream>
using namespace std;

void MaxInArray(int arr[], int length) {
    int maxVal = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < length; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    cout << maxVal << endl;
    cout << maxIndex << endl;
}

// Example usage
int main() {
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};
    int length = sizeof(arr) / sizeof(arr[0]);
    MaxInArray(arr, length);
    return 0;
}

```
## ✅ Python Solution

```

def MaxInArray(arr):
    max_val = arr[0]
    max_index = 0

    for i in range(1, len(arr)):
        if arr[i] > max_val:
            max_val = arr[i]
            max_index = i

    print(max_val)
    print(max_index)

arr = [23, 45, 82, 27, 66, 12, 78, 13, 71, 86]
MaxInArray(arr)
```