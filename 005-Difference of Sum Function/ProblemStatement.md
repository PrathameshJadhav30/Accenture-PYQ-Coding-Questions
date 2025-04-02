# Difference of Sum Function

## Problem Statement

Implement the following function:

```cpp
int differenceofSum(int n, int m);
```

The function accepts two integers `n` and `m` as arguments. It calculates:
- The sum of all numbers in the range from `1` to `m` (both inclusive) that are **not** divisible by `n`.
- The sum of all numbers in the range from `1` to `m` that **are** divisible by `n`.

The function returns the **difference** between these two sums.

## Assumptions
- `n > 0` and `m > 0`
- The sum lies within the integral range

## Example

### Input:
```text
n: 4
m: 20
```

### Output:
```text
90
```

### Explanation:
- Sum of numbers divisible by `4`:
  ```
  4 + 8 + 12 + 16 + 20 = 60
  ```
- Sum of numbers **not** divisible by `4`:
  ```
  1 + 2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
  ```
- Difference:
  ```
  150 - 60 = 90
  ```

## Sample Test Cases

### Test Case 1
#### Input:
```text
n: 3
m: 10
```
#### Output:
```text
19
```
#### Explanation:
- Sum of numbers divisible by `3`:
  ```
  3 + 6 + 9 = 18
  ```
- Sum of numbers **not** divisible by `3`:
  ```
  1 + 2 + 4 + 5 + 7 + 8 + 10 = 37
  ```
- Difference:
  ```
  37 - 18 = 19
  ```

## Function Implementation in C++
```cpp
#include <iostream>
using namespace std;

int differenceofSum(int n, int m) {
    int sum_divisible = 0, sum_not_divisible = 0;
    for (int i = 1; i <= m; i++) {
        if (i % n == 0) {
            sum_divisible += i;
        } else {
            sum_not_divisible += i;
        }
    }
    return sum_not_divisible - sum_divisible;
}

int main() {
    cout << differenceofSum(4, 20) << endl; // Output: 90
    cout << differenceofSum(3, 10) << endl; // Output: 19
    return 0;
}
```

