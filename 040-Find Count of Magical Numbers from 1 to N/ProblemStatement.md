# Find Count of Magical Numbers from 1 to N

## 🧩 Problem Statement

A number is said to be **magical** if:

1. Convert the number to its **binary representation**.
2. Replace:
   - every `'0'` with `'1'`
   - every `'1'` with `'2'`
3. Convert the resulting string to individual digits and compute the **sum of all digits**.
4. If the sum is **odd**, the number is considered **magical**.

---

### 📥 Input:
- An integer `N` (1 ≤ N ≤ 10^6)

### 📤 Output:
- Count of magical numbers from `1` to `N`.

---

### ✅ Example:

#### Input:

N = 5


#### Output:

2


#### Explanation:

| Number | Binary | After Replacement | Digit Sum | Magical? |
|--------|--------|-------------------|-----------|----------|
| 1      | 1      | 2                 | 2         | ❌ No     |
| 2      | 10     | 21                | 2+1 = 3   | ✅ Yes    |
| 3      | 11     | 22                | 2+2 = 4   | ❌ No     |
| 4      | 100    | 211               | 2+1+1 = 4 | ❌ No     |
| 5      | 101    | 212               | 2+1+2 = 5 | ✅ Yes    |

---

## 🔁 Approach

- Iterate from `1` to `N`.
- For each number:
  - Convert to binary.
  - Replace characters according to the rule.
  - Convert each character to a digit and sum them.
  - Check if the sum is odd.

---

## 🧠 C++ Implementation

```cpp
#include <iostream>
#include <string>
using namespace std;

bool isMagical(int num) {
    string binary = "";
    while (num > 0) {
        binary = (char)((num % 2) + '0') + binary;
        num /= 2;
    }

    int sum = 0;
    for (char ch : binary) {
        if (ch == '0'){
          sum += 1;
        } 
        else if (ch == '1'){
          sum += 2;
        } 
    }

    return sum % 2 == 1;
}

int countMagicalNumbers(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (isMagical(i)){
          count++;
        } 
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    cout << countMagicalNumbers(N) << endl;
    return 0;
}
```
# 🐍 Python Implementation
```
def is_magical(num):
    binary = bin(num)[2:]  # Remove '0b' prefix
    transformed = ''.join('1' if b == '0' else '2' for b in binary)
    digit_sum = sum(int(digit) for digit in transformed)
    return digit_sum % 2 == 1

def count_magical_numbers(N):
    return sum(1 for i in range(1, N + 1) if is_magical(i))

# Example
N = int(input())
print(count_magical_numbers(N))
```
# ⏱️ Time and Space Complexity
Time Complexity: O(N × logN)

Binary conversion takes logN time per number.

Space Complexity: O(1)

Only a few variables are used per iteration.

# 📌 Notes
This problem is great for practicing binary representation and string manipulation.

Efficient up to N = 10^6 due to simple operations.