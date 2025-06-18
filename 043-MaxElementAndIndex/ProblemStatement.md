# Problem Statement -MaxElementAndIndex

Given an array of integers, write a function that finds the maximum element and its index.

- **Input:** [1, 8, 4, 9, 6]  
- **Output:** (9, 3)

---

## ✅ C++ Solution

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to find maximum element and its index
pair<int, int> findMaxElement(const vector<int>& arr) {
    int maxElement = arr[0];
    int index = 0;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            index = i;
        }
    }
    return {maxElement, index};
}

int main() {
    vector<int> arr = {1, 8, 4, 9, 6};
    pair<int, int> result = findMaxElement(arr);
    
    cout << "Maximum Element: " << result.first << endl;
    cout << "Index: " << result.second << endl;
    
    return 0;
}
```
# ✅ Python Solution
```
def find_max_element(arr):
    max_element = arr[0]
    index = 0

    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
            index = i
    return max_element, index

# Example input
arr = [1, 8, 4, 9, 6]
result = find_max_element(arr)
print("Maximum Element:", result[0])
print("Index:", result[1])
```
# ✅ Output for Both

Maximum Element: 9 

Index: 3

