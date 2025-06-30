# ✅ Rearrangement of Bits –  
**Name**: Prathamesh Jadhav  
**Branch**: Artificial Intelligence and Data Science Engineering  

---

## 📘 Problem Statement

Alex gives you a positive number `N` and wants you to rearrange the bits of the number in its binary representation such that **all set bits are in consecutive order**.  
Your task is to find and return the **minimum possible integer** value formed after this rearrangement.

---

### ✨ Example

**Input:** 10

**Output:** 3

**Explanation:**

Binary of 10 = 1010 → Two set bits.
Arrange them consecutively → 0011 → Decimal = 3


**Input:** 2

**Output:** 
1 

**Explanation:**

Binary of 2 = 10 → One set bit → 0001 → Decimal = 1


---

## 🧠 C++ Solution

```cpp
#include <iostream>
using namespace std;

int rearrangeBits(int n) {
    int count = 0;

    // Count number of set bits
    while (n > 0) {
        if (n & 1)
            count++;
        n >>= 1;
    }

    // Minimum number with 'count' consecutive set bits (e.g., 0011)
    int result = (1 << count) - 1;
    return result;
}

int main() {
    int n = 10;
    cout << rearrangeBits(n) << endl; // Output: 3

    n = 2;
    cout << rearrangeBits(n) << endl; // Output: 1

    return 0;
}
```
## 🐍 Python Solution
```
def rearrange_bits(n):
    # Count set bits in binary representation
    count = bin(n).count('1')
    # Create minimum number with that many set bits (e.g., 0011)
    return (1 << count) - 1

# Test cases
print(rearrange_bits(10))  # Output: 3
print(rearrange_bits(2))   # Output: 1
```