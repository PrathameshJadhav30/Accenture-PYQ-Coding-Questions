# Problem: Count Occurrences of Each Element in an Array

## Problem Statement

Given an array of integers, your task is to count the number of occurrences of each unique element and print the result in the format:

element - count

### Sample Test Case 2

**Input:**

arr[] = {10, 5, 10, 15, 10, 5}

**Output:**

10 - 3  
5 - 2  
15 - 1

# 🧠 Explanation
We are required to:

Traverse the array.

Use a data structure (like a map/dictionary) to store the frequency of each element.

Print each element and its frequency.

This can be efficiently done using a hash map (unordered_map in C++ or dict in Python).

# ✅ Solution in C++
```
#include <iostream>
#include <unordered_map>
using namespace std;

// Function to count and print element frequencies
void countFrequencies(int arr[], int n) {
    unordered_map<int, int> frequency;

    // Count frequencies
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Print frequencies
    for (auto pair : frequency) {
        cout << pair.first << " - " << pair.second << endl;
    }
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFrequencies(arr, n);

    return 0;
}

```
# ✅ Solution in Python
```
from collections import Counter

arr = [10, 5, 10, 15, 10, 5]

# Count frequencies using Counter
frequency = Counter(arr)

# Print result
for key, value in frequency.items():
    print(f"{key} - {value}")
```
## 📝 Notes
Time Complexity: O(n), where n is the size of the array.

Space Complexity: O(n) due to storing frequencies.

The order of output may vary because hash maps/dictionaries do not guarantee order unless explicitly sorted.

