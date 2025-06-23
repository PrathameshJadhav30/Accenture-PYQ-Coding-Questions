# Max Product Pair with Given Sum 

**Problem Statement:**  
Given an array of size N, return the pair whose sum is equal to the target and has the maximum product.  
Note: First value of the pair must be greater than the second.

**Input:**  
Target: 18  
N = 8  
arr = [11, 1, 2, 8, 10, 11, 15, 7]

**Output:**  

[10, 8]

```cpp
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> maxProductPairWithSumTarget(const vector<int>& arr, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int num : arr) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            if (result.empty() || (num * complement > result[0] * result[1])) {
                result = {num, complement};
            }
        }
        numMap[num] = 1; // Store the number in the map
    }

    return result;
}
int main(){
    vector<int> arr = {1, 4, 5, 3, 2};
    int target = 6;
    vector<int> result = maxProductPairWithSumTarget(arr, target);

    if (!result.empty()) {
        cout << "Max product pair with sum " << target << ": (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
```

# Python Code
```
def max_product_pair_with_sum(arr, target):
    seen = set()
    max_product = -1
    result = []

    for num in arr:
        complement = target - num
        if complement in seen:
            product = num * complement
            first, second = max(num, complement), min(num, complement)
            if product > max_product:
                max_product = product
                result = [first, second]
        seen.add(num)

    return result

# Test case
arr = [11, 1, 2, 8, 10, 11, 15, 7]
target = 18

result = max_product_pair_with_sum(arr, target)
print(result if result else "No valid pair found")
```