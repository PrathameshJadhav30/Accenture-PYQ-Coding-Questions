# 📘 Problem: Convert Binary Number to Decimal
# 🧾 Problem Statement
You are given a number in binary format (only consisting of 0s and 1s). Your task is to convert this binary number into its decimal equivalent.

# 📥 Input
A string or integer that represents a binary number.

Example:

Input: 1010
## 📤 Output
An integer that represents the decimal form of the given binary number.

Example:

Output: 10
# 🔍 Explanation
Binary is a base-2 number system, using only 0 and 1. Decimal is base-10.

To convert binary 1010 to decimal:

Break it down from right to left:

| Position (Right to Left) | Digit | Value (2^position) | Contribution |
|--------------------------|--------|--------------------|--------------|
| 3                        | 1      | 2³ = 8             | 1 × 8 = 8    |
| 2                        | 0      | 2² = 4             | 0 × 4 = 0    |
| 1                        | 1      | 2¹ = 2             | 1 × 2 = 2    |
| 0                        | 0      | 2⁰ = 1             | 0 × 1 = 0    |
Total = 8 + 0 + 2 + 0 = 10

# 🔧 C++ Implementation
```
#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(int binary) {
    int decimal = 0, base = 1;

    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal: " << BinaryToDecimal(binary) << endl;
    return 0;
}
```
# 🐍 Python Implementation
```
def binary_to_decimal(binary_str: str) -> int:
    try:
        return int(binary_str, 2)
    except ValueError:
        return -1  # Return -1 if input is not a valid binary


binary_input = "1010"
print("Decimal:", binary_to_decimal(binary_input))
```
# ⚙️ Alternate Python Approach (Manual Calculation)
```
def binary_to_decimal_manual(binary_str: str) -> int:
    decimal = 0
    binary_str = binary_str[::-1]  # Reverse for position processing
    for i in range(len(binary_str)):
        if binary_str[i] == '1':
            decimal += 2 ** i
    return decimal


print(binary_to_decimal_manual("1010"))  # Output: 10
```
# 🧠 Key Points
Use int(binary, 2) in Python for quick conversion.

For manual conversion, iterate over each digit, multiply by power of 2, and sum it.

Ensure the input is a valid binary number (only 0s and 1s).

