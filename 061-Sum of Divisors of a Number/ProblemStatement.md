# 🧮 Sum of Divisors of a Number

**Problem Statement**  
Given a number `n`, find the sum of all its divisors from `1` to `n`.  

**Input:**  
n = 12

**Output:**  
28


**Explanation:**  
Divisors of 12 are: `1, 2, 3, 4, 6, 12`  
Sum = 1 + 2 + 3 + 4 + 6 + 12 = **28**

---

## 🔹 C++ Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    cout << "Sum of divisors: " << sum << endl;
    return 0;
}
```
# 🔹 Python Code
```
n = int(input("Enter a number: "))
sum_divisors = 0

for i in range(1, n + 1):
    if n % i == 0:
        sum_divisors += i

print("Sum of divisors:", sum_divisors)
```