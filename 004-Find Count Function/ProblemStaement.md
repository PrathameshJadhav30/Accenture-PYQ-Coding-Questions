# Find Count Function

## Problem Statement
You are given a function:

```cpp
int findCount(int arr[], int length, int num, int diff);
```

The function accepts an integer array `arr`, its length, and two integer variables `num` and `diff`. Implement this function to find and return the number of elements in `arr` whose absolute difference with `num` is less than or equal to `diff`.

### Note:
- If no element in `arr` satisfies the given condition, return `-1`.

## Example

### Input:
```plaintext
arr: 12 3 14 56 77 13
num: 13
diff: 2
```

### Output:
```plaintext
3
```

### Explanation:
Elements of `arr` having an absolute difference of less than or equal to `diff` (i.e., `2`) with `num` (i.e., `13`) are `12`, `13`, and `14`.

## Function Implementation
To solve this problem, the function should:
1. Iterate through the given array `arr`.
2. Check if the absolute difference between `num` and each element in `arr` is `<= diff`.
3. Count the number of such elements.
4. Return the count, or `-1` if no such element is found.

## Constraints
- `1 <= length <= 10^5`
- `-10^9 <= arr[i], num <= 10^9`
- `0 <= diff <= 10^9`

## Sample Code
Here is an example implementation in C++:

```cpp
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
    return (count > 0) ? count : -1;
}

int main() {
    int arr[] = {12, 3, 14, 56, 77, 13};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 13, diff = 2;
    cout << findCount(arr, length, num, diff) << endl;
    return 0;
}
```

## Complexity Analysis
- **Time Complexity:** `O(n)`, where `n` is the length of the array.
- **Space Complexity:** `O(1)`, as no additional space is used apart from variables.

## Edge Cases to Consider
1. **All elements match the condition**: The function should return the total count.
2. **No elements match**: The function should return `-1`.
3. **Array with a single element**: The function should correctly handle arrays of size `1`.
4. **Negative numbers in the array**: The function should correctly compute absolute differences.
5. **Large values for `diff`**: If `diff` is large, the function should return the total count efficiently.

## Conclusion
This function efficiently determines the count of elements satisfying the given condition. It is optimized for performance with `O(n)` complexity, making it suitable for large input sizes.