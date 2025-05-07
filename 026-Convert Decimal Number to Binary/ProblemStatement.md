# 🔢 Problem: Convert Decimal Number to Binary

## 📝 Problem Statement

Write a program to convert a given **decimal number** into its **binary equivalent**.

## 🧾 Input

A single integer `n` (where `0 <= n <= 10^9`), representing the decimal number.

### Example:
Input: 10

## 📤 Output

A string representing the binary equivalent of the input number.

### Example:
Output: 1010

---

## 🚀 Solution in C++

```
#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) 
        return "0";
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary: " << decimalToBinary(num) << endl;
    return 0;
}
```
# 🐍 Solution in Python 
```
def decimal_to_binary(n):
    return bin(n)[2:]

num = int(input("Enter a decimal number: "))
print("Binary:", decimal_to_binary(num))
```
# 💡 Explanation
To convert 10 to binary:

10 ÷ 2 = 5 remainder 0

5 ÷ 2 = 2 remainder 1

2 ÷ 2 = 1 remainder 0

1 ÷ 2 = 0 remainder 1

Reading remainders in reverse gives: 1010