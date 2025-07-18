# Problem: Maximum Gap Between Successive Elements (Sorted Form)

## Problem Statement

Given an integer array `nums`, return the maximum difference between two successive elements in its **sorted form**.  
If the array contains less than two elements, return `0`.

### Example

**Input:**  
`arr = [3, 6, 9, 1]`

**Output:**  
`3`

---

## ✅ C++ Solution

```cpp
// max_gap.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumGap(vector<int>& nums) {
    if (nums.size() < 2) return 0;
    
    sort(nums.begin(), nums.end());
    int maxDiff = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        maxDiff = max(maxDiff, nums[i] - nums[i - 1]);
    }
    
    return maxDiff;
}

int main() {
    vector<int> arr = {3, 6, 9, 1};
    cout << "Maximum Gap: " << maximumGap(arr) << endl;
    return 0;
}
```
# ✅ Python Solution
```
# max_gap.py

def maximum_gap(nums):
    if len(nums) < 2:
        return 0
    
    nums.sort()
    max_diff = 0
    
    for i in range(1, len(nums)):
        max_diff = max(max_diff, nums[i] - nums[i - 1])
    
    return max_diff

# Test
arr = [3, 6, 9, 1]
print("Maximum Gap:", maximum_gap(arr))
```