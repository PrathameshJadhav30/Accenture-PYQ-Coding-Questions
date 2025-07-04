# Rotate Array By K Steps

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

---

## ✅ Example

**Input:**

nums = [1,2,3,4,5,6,7], k = 3

**Output:**

[5,6,7,1,2,3,4]


**Explanation:**
- Rotate 1 step right: [7,1,2,3,4,5,6]  
- Rotate 2 steps right: [6,7,1,2,3,4,5]  
- Rotate 3 steps right: [5,6,7,1,2,3,4]  

---

## 🔹 C++ Code

```cpp
// ✅ C++ Program to Rotate Array Right by K Steps
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  // In case k > n
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
```
# 🔹 Python Code

```
def rotate(nums, k):
    n = len(nums)
    k = k % n  # Handle k > n
    nums[:] = nums[-k:] + nums[:-k]

# Test Input
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3

rotate(nums, k)
print("Rotated Array:", nums)
```