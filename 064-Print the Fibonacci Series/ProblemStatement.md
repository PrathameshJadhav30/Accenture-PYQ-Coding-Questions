# 🚀 Problem: Print the Fibonacci Series

## 🧾 Problem Statement:
Write a program to print the Fibonacci series up to `n` terms.  
The Fibonacci sequence is a series of numbers where a number is the sum of the two preceding ones.  
It starts from 0 and 1.

### 📥 Input:
An integer `n` – number of terms to print in Fibonacci series.

### 📤 Output:
Print the first `n` terms of the Fibonacci sequence.

---

## ✅ Example:
**Input:**  
5

**Output:**  
0 1 1 2 3

---

## 💡 C++ Solution

```cpp
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    printFibonacci(n);

    return 0;
}
```
# 🐍 Python Solution
```
def print_fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=' ')
        a, b = b, a + b

n = int(input("Enter number of terms: "))
print("Fibonacci Series:")
print_fibonacci(n)
```