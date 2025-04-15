# Problem: Sum of Numbers Divisible by Both 3 and 5

## Problem Statement

You are required to implement the following function:

```cpp
int Calculate(int m, int n);
```
The function accepts two positive integers m and n as its arguments. You are required to calculate the sum of all numbers divisible both by 3 and 5, between m and n (both inclusive), and return the same.
```
Note
0 < m <= n
```
# Example
**Input:**

m = 12  
n = 50

**Output:**

90

**Explanation:**

The numbers divisible by both 3 and 5 between 12 and 50 (inclusive) are {15, 30, 45}.
Their sum is 15 + 30 + 45 = 90.

# Another Example
**Input:**

m = 100  
n = 160

**Output:**

510

# Implementation
Below are the implementations of the solution in both C++ and Python.

## ✅ C++ Code
```
#include <iostream>
using namespace std;

int Calculate(int m, int n) {
    int sum = 0;
    for (int i = m; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    cout << "Output: " << Calculate(m, n) << endl;
    return 0;
}

```
## ✅ Python Code
```
def Calculate(m, n):
    total = 0
    for i in range(m, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            total += i
    return total

# Sample Input
m = int(input("Enter m: "))
n = int(input("Enter n: "))
print("Output:", Calculate(m, n))
```
## Time and Space Complexity
# Time Complexity:
 O(n - m + 1) — We check each number between m and n once.

# Space Complexity:
 O(1) — Constant space is used regardless of input size.