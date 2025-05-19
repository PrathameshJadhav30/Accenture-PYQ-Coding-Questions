# Intersection of Two Arrays

## 🧾 Problem Statement

Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must be **unique**, and you may return the result in **any order**.

### Example:
**Input:** 

nums1 = [1,2,2,1], nums2 = [2,2]

**Output:** 

[2]

**Input:** 

nums1 = [4,9,5], nums2 = [9,4,9,8,4]

**Output:**

[9,4] or [4,9]

---

## 🧠 Approach

- Convert both arrays to sets to eliminate duplicates.
- Use set intersection to find common elements.
- Return the result as a list/vector.

---

## 🧪 Dry Run

Input:

nums1 = [1,2,2,1], nums2 = [2,2]

Step-by-step:
- Convert to sets:  
  `set1 = {1, 2}`  
  `set2 = {2}`
- Intersection:  
  `result = set1 ∩ set2 = {2}`
- Output: `[2]`

---

## ✅ Python Code

```python
def intersection(nums1, nums2):
    set1 = set(nums1)
    set2 = set(nums2)
    return list(set1 & set2)

# Example usage
print(intersection([1,2,2,1], [2,2]))  # Output: [2]
print(intersection([4,9,5], [9,4,9,8,4]))  # Output: [9, 4] or [4, 9]
```
# ✅ C++ Code
```
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> resultSet;
    
    for (int num : nums2) {
        if (set1.count(num)) {
            resultSet.insert(num);
        }
    }

    return vector<int>(resultSet.begin(), resultSet.end());
}

// Example usage
int main() {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> result = intersection(nums1, nums2);

    for (int num : result)
        cout << num << " ";
    return 0;
}
```
# ⏱️ Time & Space Complexity
Time Complexity:
O(n + m)
where n = len(nums1) and m = len(nums2), due to linear pass and set operations.

Space Complexity:
O(n + m)
for the storage in sets.

# 📝 Notes
The output order doesn't matter.

Efficient for large datasets due to hashing.

If frequent queries are expected, pre-processing with a hash set is beneficial.

