# Missing Number in an Array

## Problem Statement

Given an array of integers where the numbers are in a sequence with one number missing, write a function to find the missing number.

### Input:

```txt
[1, 2, 4, 5, 6]
```

### Output:

```txt
3
```

---

## Approach

1. Calculate the expected sum of numbers from 1 to n (inclusive).
2. Subtract the actual sum of the given array from the expected sum.
3. The result will be the missing number.

---

## C++ Implementation

```cpp
#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int n) {
    int total = n * (n + 1) / 2; // Sum of first n natural numbers
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return total - sum; // The difference is the missing number
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6; // Total numbers from 1 to 6
    cout << "Missing Number: " << findMissingNumber(arr, n) << endl;
    return 0;
}
```

---

## Python Implementation

```python
def find_missing_number(arr, n):
    total = n * (n + 1) // 2  # Expected sum from 1 to n
    return total - sum(arr)  # Missing number is the difference

# Example usage
arr = [1, 2, 4, 5, 6]
n = 6
print("Missing Number:", find_missing_number(arr, n))
```

---

## Time and Space Complexity

* **Time Complexity:** O(n) — Iterating through the array once.
* **Space Complexity:** O(1) — No extra space is used except variables.

---

## Notes

* Assumes exactly one number is missing.
* Input must be a sequence of natural numbers from 1 to n with one missing value.
