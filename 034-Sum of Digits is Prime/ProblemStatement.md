# Problem: Sum of Digits is Prime

## 🧩 Problem Statement

Check whether the sum of digits of a given integer is a prime number.

### Input
- An integer `n` (e.g., 43, 123)

### Output
- Print `"YES"` if the sum of digits of `n` is a prime number.
- Otherwise, print `"NO"`.

### Examples

**Input:** 

43

**Output:**

 YES

**Explanation:**

 4 + 3 = 7 → 7 is a prime number

**Input:** 

123

**Output:** 

NO

**Explanation:**

1 + 2 + 3 = 6 → 6 is not a prime number


---

## 🔍 Approach

1. Calculate the sum of digits of the number.
2. Check if the sum is a prime number.
3. Return "YES" if it is prime, otherwise "NO".

---

## 💻 C++ Implementation

```cpp
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2){
      return false;
    } 
    for (int i = 2; i*i <= num; ++i) {
        if (num % i == 0){
           return false;
        } 
    }
    return true;
}

// Function to calculate the sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int digitSum = sumOfDigits(n);
    if (isPrime(digitSum))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

```
# 🐍 Python Implementation
```
# Function to check if a number is prime
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

# Function to calculate the sum of digits
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

# Input and output logic
n = int(input())
digit_sum = sum_of_digits(n)
if is_prime(digit_sum):
    print("YES")
else:
    print("NO")

```
# 🧪 Test Cases
| Input | Output | Explanation            |
| ----- | ------ | ---------------------- |
| 43    | YES    | 4+3 = 7 (prime)        |
| 123   | NO     | 1+2+3 = 6 (not prime)  |
| 29    | YES    | 2+9 = 11 (prime)       |
| 111   | NO     | 1+1+1 = 3 (prime)      |
| 444   | NO     | 4+4+4 = 12 (not prime) |


# 🧠 Complexity Analysis
Time Complexity: O(sqrt(n)) for checking prime + O(d) for summing digits where d is the number of digits.

Space Complexity: O(1) (constant space)