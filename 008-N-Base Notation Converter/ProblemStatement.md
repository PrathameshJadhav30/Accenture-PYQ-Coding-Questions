# 🚀 N-Base Notation Converter

Convert a given **decimal number** into any base `n` (from 2 to 36), using the standard symbols:

```
0, 1, 2, ..., 9, A, B, ..., Z
```

## 🧠 Problem Description

You are given:
- A base `n` (where `2 ≤ n ≤ 36`)
- A positive integer `num`

Convert `num` to its representation in base `n` using only the first `n` symbols of the standard notation list.

### Decimal to N-Base Conversion Rule:

- Use integer division and modulus:
  1. Divide the number by `n`
  2. Store the remainder
  3. Update number to quotient
  4. Repeat until number is 0
- Result = remainders collected in **reverse** order

---

## 📥 Input

- `n`: Base (2 ≤ n ≤ 36)
- `num`: A positive integer

## 📤 Output

- String representation of `num` in base-`n`

---

## 📌 Example 1

**Input**
```
n = 12
num = 718
```

**Process**

| Step | num | Quotient | Remainder | Symbol |
|------|-----|----------|-----------|--------|
| 1    | 718 | 59       | 10        | A      |
| 2    | 59  | 4        | 11        | B      |
| 3    | 4   | 0        | 4         | 4      |

**Output**
```
4BA
```

---

## 📌 Example 2

**Input**
```
n = 21  
num = 5678
```

**Output**
```
CI8
```

---

## 🐍 Python Code (Simplified Version)

```python
def DectoNBase(n, num):
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    if num == 0:
        return "0"
    result = ""
    while num:
        result = digits[num % n] + result
        num //= n
    return result

# Test Cases
print("Base 12, Number 718 =>", DectoNBase(12, 718))   # Output: 4BA
print("Base 21, Number 5678 =>", DectoNBase(21, 5678)) # Output: CI8
```

---

## 💻 C++ Code (Simplified and Well Explained)

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to convert a decimal number to base-n
string DectoNBase(int n, int num) {
    string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result = "";

    if (n < 2 || n > 36) {
        return "Invalid Base";
    }

    if (num == 0) {
        return "0";
    }

    // Convert the number to base-n
    while (num > 0) {
        int remainder = num % n;
        result += symbols[remainder];
        num /= n;
    }

    // Reverse the result since we get digits in reverse order
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int base1 = 12, num1 = 718;
    cout << "Base " << base1 << ", Number " << num1 << " => " << DectoNBase(base1, num1) << endl;  // Output: 4BA

    int base2 = 21, num2 = 5678;
    cout << "Base " << base2 << ", Number " << num2 << " => " << DectoNBase(base2, num2) << endl;  // Output: CI8

    return 0;
}
```

---

## 🙌 Author

**Prathamesh Jadhav**  
📸 [Instagram](https://www.instagram.com/prathamesh_jadhav_30)  
🧠 B.Tech in AI & Data Science

---

## ✅ Note

This problem is a classic example of base conversion, commonly asked in interviews and coding assessments. The solution supports up to base 36 using standard alphanumeric symbols.
