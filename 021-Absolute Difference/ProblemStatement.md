# Problem: findCount – Count Elements with Absolute Difference Less Than or Equal to diff
# Problem Statement
You are given a function:
```
int findCount(int arr[], int length, int num, int diff);
```
# Objective:
Implement this function to find and return the number of elements in the array arr whose absolute difference with the given number num is less than or equal to diff.

## Input
arr: An array of integers.

length: The number of elements in the array.

num: An integer value to compare with.

diff: The allowed maximum absolute difference.

## Output
Return the count of elements that satisfy the condition.

If no elements satisfy the condition, return -1.

# Example
**Input:**

arr = [12, 3, 14, 56, 77, 13]

num = 13

diff = 2

**Output:**

3

**Explanation:**

Elements in arr with absolute difference from 13 ≤ 2 are: 12 (|12 - 13| = 1), 14 (|14 - 13| = 1), 13 (|13 - 13| = 0)

Hence, the count is 3.

# C++ Implementation
```
#include <iostream>
#include <cmath>
using namespace std;

int findCount(int arr[], int length, int num, int diff) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (abs(arr[i] - num) <= diff) {
            count++;
        }
    }
    
    if (count == 0) {
        return -1;
    } else {
        return count;
    }
}

// Sample usage
int main() {
    int arr[] = {12, 3, 14, 56, 77, 13};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 13;
    int diff = 2;
    cout << findCount(arr, length, num, diff) << endl;  // Output: 3
    return 0;
}

```
# Python Implementation
```
def findCount(arr, num, diff):
    count = 0
    for val in arr:
        if abs(val - num) <= diff:
            count += 1
    return count if count > 0 else -1

# Sample usage
arr = [12, 3, 14, 56, 77, 13]
num = 13
diff = 2
print(findCount(arr, num, diff))  # Output: 3
```
## Time and Space Complexity
Time Complexity: O(n), where n is the length of the array. We check each element once.

Space Complexity: O(1), as we use a constant amount of extra space.