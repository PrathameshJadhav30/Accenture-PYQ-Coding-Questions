## 📘 Chocolate Distribution Problem
## Problem Statement
Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates.
There are m students, the task is to distribute chocolate packets such that:

Each student gets exactly one packet.

The difference between the number of chocolates in the packet with the maximum and minimum chocolates given to the students is minimum.

## 🔢 Examples

**Input :** 

arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3  
**Output:** 

Minimum Difference is 2  
**Explanation:** 

Pick packets with 2, 3, and 4 chocolates.

**Input :**

 arr[] = {3, 4, 1, 9, 56, 7, 9, 12}, m = 5  

**Output:**

 Minimum Difference is 6  

**Input :**

 arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50}, m = 7  

**Output:**

 Minimum Difference is 10
## ✅ Approach
Sort the array.

Consider all subarrays of size m.

Compute the difference between the maximum and minimum elements of each subarray.

Return the minimum of these differences.

## 🧠 Time Complexity
Time: O(N log N) due to sorting.

Space: O(1)

## 💻 C++ Code
```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinDiff(vector<int>& arr, int m) {
    if (arr.size() < m) return -1;

    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < arr.size(); i++) {
        int diff = arr[i + m - 1] - arr[i];
        min_diff = min(min_diff, diff);
    }

    return min_diff;
}

int main() {
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout << "Minimum Difference is " << findMinDiff(arr, m) << endl;
    return 0;
}
```
## 🐍 Python Code
```
def find_min_diff(arr, m):
    if len(arr) < m:
        return -1

    arr.sort()
    min_diff = float('inf')

    for i in range(len(arr) - m + 1):
        diff = arr[i + m - 1] - arr[i]
        min_diff = min(min_diff, diff)

    return min_diff


arr = [7, 3, 2, 4, 9, 12, 56]
m = 3
print("Minimum Difference is", find_min_diff(arr, m))
```