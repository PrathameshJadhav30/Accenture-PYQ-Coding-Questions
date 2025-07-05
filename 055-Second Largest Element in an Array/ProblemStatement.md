# 🚀 Problem: Second Largest Element in an Array

Given an array of integers, find the second largest element in the array.

---

## ✅ Constraints:
- Array size ≥ 2
- All elements are integers (positive, negative, or zero)

---

## 🧠 Approach:
1. Traverse the array while maintaining:
   - `first` → the largest element so far
   - `second` → the second largest element so far
2. Update `first` and `second` accordingly in one pass.

---

## 🧪 Example:

**Input:**
arr = [12, 35, 1, 10, 34, 1]


**Output:**
Second largest = 34


---

## 💻 C++ Code

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;

    for (int num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int result = findSecondLargest(arr);

    if (result != -1)
        cout << "Second largest = " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}
```

# 🐍 Python Code
```
def find_second_largest(arr):
    if len(arr) < 2:
        return None

    first = second = float('-inf')

    for num in arr:
        if num > first:
            second = first
            first = num
        elif first > num > second:
            second = num

    return second if second != float('-inf') else None

# Example usage
arr = [12, 35, 1, 10, 34, 1]
result = find_second_largest(arr)

if result is not None:
    print(f"Second largest = {result}")
else:
    print("No second largest element found.")
```
# 📌 Notes:
Make sure to handle duplicates.

If no second largest exists (e.g., all elements same), return -1 or None.