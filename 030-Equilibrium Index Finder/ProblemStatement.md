# 🔁 Equilibrium Index Finder

## ✅ Problem Statement

Given an array `arr` of integers of size `n`, find the **equilibrium index** where the sum of elements to the **left** of the index is equal to the sum of elements to the **right**. If no such index exists, return `-1`.

---

### 🧾 Input

- A list or array of integers `arr`.

### 📤 Output

- Return the equilibrium index as an integer.
- If no equilibrium index exists, return `-1`.

---

## 🧠 Explanation

For example, consider the input:

```text
arr = {3, 4, 3, 1, 6}
```
For index 2:

     Left sum = 3 + 4 = 7

    Right sum = 1 + 6 = 7

    So, index 2 is the equilibrium index because the left and right sums are equal.

 # C++ Implementation
 ```
 #include <iostream>
#include <vector>
using namespace std;

int findEquilibriumIndex(vector<int>& arr) {
    int totalSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        totalSum -= arr[i];  // totalSum is now the right sum

        if (leftSum == totalSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    vector<int> arr = {3, 4, 3, 1, 6};
    int index = findEquilibriumIndex(arr);
    cout << "Equilibrium Index: " << index << endl;
    return 0;
}
```
# 🐍 Python Implementation
```
def find_equilibrium_index(arr):
    total_sum = 0
    for i in range(len(arr)):
        total_sum += arr[i]

    left_sum = 0
    for i in range(len(arr)):
        total_sum -= arr[i]  # total_sum becomes right sum

        if left_sum == total_sum:
            return i

        left_sum += arr[i]

    return -1

# Example usage
arr = [3, 4, 3, 1, 6]
index = find_equilibrium_index(arr)
print("Equilibrium Index:", index)
```
## 🧪 Test Case
**Input:**

arr = {3, 4, 3, 1, 6}

**Output:**

2

**Explanation:**

Left of index 2: 3 + 4 = 7

Right of index 2: 1 + 6 = 7

# 🧩 Time and Space Complexity
Time Complexity: O(n)

Space Complexity: O(1)