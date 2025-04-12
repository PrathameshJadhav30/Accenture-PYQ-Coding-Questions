# Number of Carries

## Problem Statement

A carry is a digit that is transferred to the left if the sum of digits exceeds 9 while adding two numbers from right to left, one digit at a time.

You are required to implement the following function:

```cpp
int NumberOfCarries(int num1, int num2);
```
# Function Description:
The function accepts two integers num1 and num2 as its arguments. You need to calculate and return the total number of carries generated while adding the digits of num1 and num2.

# Assumptions:
num1 and num2 are non-negative integers (num1, num2 >= 0).

- Example:
Num 1: 451
Num 2: 349

- Output:
2
# Explanation:
Adding num1 and num2 right-to-left results in 2 carries:

(1 + 9) = 10, so 1 is carried over.

(5 + 4 + carry 1) = 10, so 1 is carried again.

Hence, the total number of carries is 2.

# Another Example:
- Input:
Num 1: 23
Num 2: 563
- Output:
0
# Approach:
Initialize variables carry to 0 and carryCount to 0. These will track the carry and the total number of carries respectively.

Add the corresponding digits from num1 and num2 starting from the rightmost digit (using modulus and division).

If the sum of the digits plus the carry is greater than or equal to 10, set the carry for the next column and increment the carry count.

Continue until all digits are processed.

# C++ Implementation

#include <iostream>
using namespace std;

int NumberOfCarries(int num1, int num2) {
    int carry = 0;
    int carryCount = 0;

    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        int sum = digit1 + digit2 + carry;

        if (sum >= 10) {
            carry = sum / 10;
            carryCount++;
        } else {
            carry = 0;
        }

        num1 /= 10;
        num2 /= 10;
    }

    return carryCount;
}



# Explanation:
We extract the rightmost digit of both numbers (num1 % 10 and num2 % 10).

We add the digits along with any carry from the previous step.

If the sum is 10 or more, we generate a carry for the next digit and increment the carry count.

We continue this process until both numbers are reduced to 0.

# Python Implementation

def number_of_carries(num1, num2):
    carry = 0
    carry_count = 0

    while num1 > 0 or num2 > 0:
        digit1 = num1 % 10
        digit2 = num2 % 10

        total = digit1 + digit2 + carry

        if total >= 10:
            carry = total // 10
            carry_count += 1
        else:
            carry = 0

        num1 //= 10
        num2 //= 10

    return carry_count



# Explanation:
Similar to the C++ version, we extract the rightmost digits of num1 and num2.

We calculate the sum of these digits and any carry from the previous step.

If the sum is 10 or more, we set a carry for the next column and increase the carry count.

The process continues until both numbers are exhausted.

# Time Complexity:
The time complexity of the solution is O(d), where d is the number of digits in the larger of the two numbers. This is because we process each digit exactly once.

# Space Complexity:
The space complexity is O(1), as we are only using a few extra variables regardless of the size of the input numbers.