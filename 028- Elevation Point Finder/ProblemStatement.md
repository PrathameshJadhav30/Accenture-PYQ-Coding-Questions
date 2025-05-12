# 📄 Elevation Point Finder
## 🧩 Problem Statement
Given an array of N integers, find the elevation point.
An elevation point is an element which is not smaller than any of the elements before it and not smaller than any of the elements after it.
Return the first such element from left to right.
If multiple elevation points exist, return the first one.
Assume there is always at least one such point in the array.

# 🔢 Input
An integer N — the size of the array.

An array arr of N integers.

# 🎯 Output
An integer — the first elevation point in the array.

## 📝 Example 1:
**Input:**

N = 7
arr = [1, 2, 3, 4, 3, 2, 1]

**Output:**

4

**Explanation:**

4 is greater than or equal to all previous elements [1, 2, 3], and also greater than or equal to the following elements [3, 2, 1].

## 📝 Example 2:
**Input:**

N = 2
arr = [5, 3]

**Output:**

5

**Explanation:**

5 is the first element, and greater than 3. So it satisfies the condition.

# 🧠 Approach
Traverse the array from left to right.

Keep track of the maximum element encountered so far.

At each position, check if the current element is:

Greater than or equal to the maximum so far (left side).

Greater than or equal to all elements to its right.

If both conditions are satisfied, return that element.

# 💻 C++ Implementation
```
#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int findElevationPoint(vector<int>& arr) {
    int N = arr.size();
    int maxLeft = INT_MIN;

    for (int i = 0; i < N; i++) {
        maxLeft = max(maxLeft, arr[i]);
        bool isElevation = true;

        for (int j = i + 1; j < N; j++) {
            if (arr[j] > arr[i]) {
                isElevation = false;
                break;
            }
        }

        if (maxLeft <= arr[i] && isElevation){
            return arr[i];
        }
            
    }

    return -1; // Should not happen as per constraints
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 3, 2, 1};
    vector<int> arr2 = {5, 3};

    cout << findElevationPoint(arr1) << endl; // Output: 4
    cout << findElevationPoint(arr2) << endl; // Output: 5

    return 0;
}
```

# 🧪 Python Implementation
```
def find_elevation_point(arr):
    N = len(arr)
    max_left = float('-inf')
    
    for i in range(N):
        max_left = max(max_left, arr[i])
        is_elevation = True
        for j in range(i + 1, N):
            if arr[j] > arr[i]:
                is_elevation = False
                break
        if max_left <= arr[i] and is_elevation:
            return arr[i]

print(find_elevation_point([1, 2, 3, 4, 3, 2, 1]))  # Output: 4
print(find_elevation_point([5, 3]))                # Output: 5
```

