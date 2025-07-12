# Problem Statement
You are given an integer `n`. Write a function to calculate and return the sum of the digits in `n` after converting it to its binary representation.

For example:  
`n = 15` → Binary: `1111` → Sum of digits = `4`

---

## ✅ Python Code

```python
# Function to compute sum of binary digits
def sum_of_binary_digits(n):
    binary_str = bin(n)[2:]  # Convert to binary and remove '0b'
    return sum(int(digit) for digit in binary_str)

# Example usage
n = 15
print("Sum of binary digits:", sum_of_binary_digits(n))
```

# ✅ C++ Code
```
#include <iostream>
using namespace std;

// Function to compute sum of binary digits
int sumOfBinaryDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 2;
        n /= 2;
    }
    return sum;
}

int main() {
    int n = 15;
    cout << "Sum of binary digits: " << sumOfBinaryDigits(n) << endl;
    return 0;
}
```