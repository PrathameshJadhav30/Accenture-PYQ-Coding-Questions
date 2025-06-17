# 🔢 MaxInArray 

## 📝 Problem Statement:

You are given a function:
```
void MaxInArray(int arr[], int length); 

def MaxInArray(arr):
```
---
The function accepts an integer array `arr` of size `length` as its argument. Implement the function to find the **maximum element** of the array and print:

- The maximum element
- Its index

Each on a separate line.

---

## ⚠️ Constraints:

- Array index starts with 0.
- Only one maximum element exists.
- Do **not** print extra messages or lines.
- Output should be exactly as specified.

---

## 💡 Example

**Input:**

23 45 82 27 66 12 78 13 71 86

**Expected Output:**

86

9


---

## 💻 C++ Implementation

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

// Sample usage
int main() {
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};
    int length = sizeof(arr) / sizeof(arr[0]);

    MaxInArray(arr, length);
    return 0;
}
```
# 🐍 Python Implementation
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

# Sample usage
arr = [23, 45, 82, 27, 66, 12, 78, 13, 71, 86]
MaxInArray(arr)
```