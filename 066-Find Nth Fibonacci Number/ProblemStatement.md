# 🧮 Problem Statement

**Find Nth Fibonacci Number**

Given an integer input `n`, find the `n`th Fibonacci number.

The Fibonacci series is:  
`0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...`  
(index starts from 0)

## 🧠 Input
```
n = 9
```

## ✅ Output
```
34
```

---

## 💡 C++ Solution

```cpp
#include <iostream>
using namespace std;

// Function to return nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cout << "Enter the index (n): ";
    cin >> n;

    cout << "Nth Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
```

---

## 💡 Python Solution

```python
def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1

    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b

    return b

# Input from user
n = int(input("Enter the index (n): "))
print("Nth Fibonacci number is:", fibonacci(n))
```

---

📌 **Example Execution**

```
Input: 9
Output: 34
```

🧠 The Fibonacci series index starts from 0.
