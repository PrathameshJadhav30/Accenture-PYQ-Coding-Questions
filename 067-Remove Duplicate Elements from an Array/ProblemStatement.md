# Remove Duplicate Elements from an Array

**Problem Statement**  
Given an array of integers, write a function to remove duplicate elements.

- **Input:** [1, 2, 2, 3, 4, 4, 5]  
- **Output:** [1, 2, 3, 4, 5]

---

## ✅ C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }

    return result;
}

int main() {
    vector<int> input = {1, 2, 2, 3, 4, 4, 5};
    vector<int> output = removeDuplicates(input);

    cout << "Output: [";
    for (size_t i = 0; i < output.size(); ++i) {
        cout << output[i];
        if (i != output.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
```
# ✅ Python Solution
```
def remove_duplicates(arr):
    seen = set()
    result = []
    for num in arr:
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result

# Test case
input_arr = [1, 2, 2, 3, 4, 4, 5]
output_arr = remove_duplicates(input_arr)
print("Output:", output_arr)
````