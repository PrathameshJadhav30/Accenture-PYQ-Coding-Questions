# Problem: Sum of Even Positions After Reversing the Array

## ✅ Problem Statement
Given an array `A` of length `N`, find the sum of even positions after reversing the array.  
You need to return the **sum of elements present at even indices (0-based indexing)** in the reversed array.

---

### 🔸 Example:

**Input:**  
`N = 6`  
`arr = [10, 20, 30, 40, 50, 60]`  

**Output:**  
`120`  

**Explanation:**  
Reversed array: `[60, 50, 40, 30, 20, 10]`  
Even indices: `0, 2, 4 → 60, 40, 20`  
Sum = `60 + 40 + 20 = 120`

---

## 🔷 C++ Solution

```cpp
#include <iostream>
#include <vector>
using namespace std;

int sumEvenIndexAfterReverse(vector<int>& arr) {
    int n = arr.size();
    int sum = 0;

    // Traverse from the end (reversed)
    for (int i = n - 1, idx = 0; i >= 0; i--, idx++) {
        if (idx % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int result = sumEvenIndexAfterReverse(arr);
    cout << "Sum of even index after reverse: " << result << endl;
    return 0;
}
```
# 🟢 Python Solution
```
def sum_even_index_after_reverse(arr):
    reversed_arr = arr[::-1]
    total = 0

    for i in range(0, len(reversed_arr), 2):
        total += reversed_arr[i]

    return total

# Example usage
arr = [10, 20, 30, 40, 50, 60]
result = sum_even_index_after_reverse(arr)
print("Sum of even index after reverse:", result)
```
# 📌 Note:

Indexing is 0-based.

We only consider elements at positions 0, 2, 4, ... after reversing.