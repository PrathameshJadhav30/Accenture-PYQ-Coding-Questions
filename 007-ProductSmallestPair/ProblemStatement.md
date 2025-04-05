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

int ProductSmallestPair(int sum, vector<int> arr) {
    if (arr.size() < 2) return -1;

    sort(arr.begin(), arr.end());

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] <= sum) {
                return arr[i] * arr[j];
            }
        }
    }

    return 0;
}

int main() {
    vector<int> arr1 = {5, 2, 4, 3, 9, 7, 1};
    int sum1 = 9;
    cout << "Output 1: " << ProductSmallestPair(sum1, arr1) << std::endl;  // 2

    vector<int> arr2 = {9, 8, 3, -7, 3, 9};
    int sum2 = 4;
    cout << "Output 2: " << ProductSmallestPair(sum2, arr2) << std::endl;  // -21

    vector<int> arr3 = {5};
    int sum3 = 4;
    cout << "Output 3: " << ProductSmallestPair(sum3, arr3) << std::endl;  // -1

    vector<int> arr4 = {10, 12};
    int sum4 = 3;
    cout << "Output 4: " << ProductSmallestPair(sum4, arr4) << std::endl;  // 0

    return 0;
}
```

---

## 👨‍💻 Author 
Prepared by: *Prathamesh Jadhav*

