# 🚀 Problem: Merged Sorted Array

## 📝 Problem Statement:
Given two arrays of integers, return the merged sorted array.

### ✅ Input:
- `arr1 = [1, 2, 3, 4, 5]`
- `arr2 = [2, 4, 6, 8, 10]`

### 🎯 Output:
- `[1, 2, 2, 3, 4, 4, 5, 6, 8, 10]`

---

## 🔹 C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    
    // Insert elements of both arrays
    result.insert(result.end(), arr1.begin(), arr1.end());
    result.insert(result.end(), arr2.begin(), arr2.end());
    
    // Sort the merged array
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 4, 6, 8, 10};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged Sorted Array: ";
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}
```
# 🔹 Python Solution
```
def merge_sorted_arrays(arr1, arr2):
    merged = arr1 + arr2  # Combine both arrays
    merged.sort()         # Sort the merged array
    return merged

# Input arrays
arr1 = [1, 2, 3, 4, 5]
arr2 = [2, 4, 6, 8, 10]

# Output
result = merge_sorted_arrays(arr1, arr2)
print("Merged Sorted Array:", result)
```
### 👨‍💻 Author: Prathamesh Jadhav
### 🎓 Branch: Artificial Intelligence and Data Science Engineering
