# ProductSmallestPair 

## 🧹 Problem Statement

Implement the following function in C++:

```cpp
int ProductSmallestPair(int sum, vector<int> arr);
```

The function accepts:
- an integer `sum`
- an integer vector `arr` of size `n`

It finds a pair of **distinct elements** `(arr[j], arr[k])` such that:
- They are the **two smallest elements** in the array
- `arr[j] + arr[k] <= sum`
- `j != k`

And returns the **product** of this pair.

---

## 📌 Conditions

- Return **-1** if the array is empty or if `n < 2`.
- Return **0** if **no valid pair** is found where the sum is less than or equal to `sum`.
- All computed values lie within the **integer range**.

---

## 🧪 Examples

### Example 1

**Input:**
```
sum = 9  
arr = [5, 2, 4, 3, 9, 7, 1]
```

**Output:**
```
2
```

**Explanation:**  
Smallest pair: (1, 2)  
Sum = 3 <= 9 → Valid  
Product = 1 * 2 = **2**

---

### Example 2

**Input:**
```
sum = 4  
arr = [9, 8, 3, -7, 3, 9]
```

**Output:**
```
-21
```

**Explanation:**  
Smallest pair: (-7, 3)  
Sum = -4 <= 4 → Valid  
Product = -7 * 3 = **-21**

---

### Example 3

**Input:**
```
sum = 4  
arr = [5]
```

**Output:**
```
-1
```

**Explanation:**  
Only 1 element — not enough to form a pair.

---

### Example 4

**Input:**
```
sum = 3  
arr = [10, 12]
```

**Output:**
```
0
```

**Explanation:**  
Only one pair: (10, 12)  
Sum = 22 > 3 → Not valid

---

## 💡 Function Logic

- If the array has less than 2 elements → return -1
- Sort the array
- Check all unique pairs starting from smallest values
- Return the product of the first valid pair `(a, b)` where `a + b <= sum`
- If no such pair is found → return 0

---

## 💻 Sample C++ Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ProductSmallestPair(int sum, vector<int>& arr) {
    if (arr.size() < 2) {
        return -1;
    }

    sort(arr.begin(), arr.end());
    int a = arr[0];
    int b = arr[1];

    if (a + b <= sum) {
        return a * b;
    } else {
        return 0;
    }
}

int main() {
    vector<int> arr1 = {5, 2, 4, 3, 9, 7, 1};
    int sum1 = 9;
    cout << "Output: " << ProductSmallestPair(sum1, arr1) << endl; // Output: 2

    vector<int> arr2 = {9, 8, 3, -7, 3, 9};
    int sum2 = 4;
    cout << "Output: " << ProductSmallestPair(sum2, arr2) << endl; // Output: -21

    return 0;
}
```
Python Implementation
---
def ProductSmallestPair(sum_value, arr):
    if len(arr) < 2:
        return -1

    arr.sort()
    a = arr[0]
    b = arr[1]

    if a + b <= sum_value:
        return a * b
    else:
        return 0


## 👨‍💻 Author 
Prepared by: *Prathamesh Jadhav*

Conclusion

This function identifies the smallest two elements in an array, checks if their sum is within the given limit, and returns their product if valid. It handles edge cases such as empty arrays and ensures the result fits within integer bounds.