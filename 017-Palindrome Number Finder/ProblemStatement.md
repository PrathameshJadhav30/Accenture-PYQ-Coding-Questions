# 🔁 Palindrome Number Finder

## 📝 Problem Statement

Write a program that takes two integers as **lower limit** and **upper limit**, and prints all the **palindromic numbers** that exist in that range (inclusive).

A **palindromic number** is a number that remains the same when its digits are reversed (e.g., 121, 33, 7).

---

## 📌 Instructions

- Implement the program using both **C++** and **Python**.
- Code should be **logically and syntactically correct**.
- Use **standard input** to read the lower and upper bounds.
- Output should display all intermediate **palindromic numbers**, separated by commas.

---

## 🔢 Input Format

- Two integers separated by a comma (e.g., `10, 80`)

---

## 🎯 Output Format

- Palindromic numbers between the two limits (inclusive), comma-separated and ending with a period.

---

## ✅ Test Cases

### Test Case 1:
**Input:**

10, 80

**Expected Output:**

11, 22, 33, 44, 55, 66, 77.

---

### Test Case 2:
**Input:**

100, 200

**Expected Output:**

101, 111, 121, 131, 141, 151, 161, 171, 181, 191.

---

## 💻 C++ Implementation

```
#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int lower, upper;
    char comma;

    // Input format: e.g., 10, 80
    cin >> lower >> comma >> upper;

    bool first = true;

    for (int i = lower; i <= upper; i++) {
        if (isPalindrome(i)) {
            if (!first) {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    }

    cout << "." << endl;

    return 0;
}

```
## 🐍 Python Implementation
```
def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Input format: e.g., 10, 80
input_str = input()
lower, upper = map(int, input_str.split(','))

palindromes = []

for i in range(lower, upper + 1):
    if is_palindrome(i):
        palindromes.append(str(i))

# Join and print with commas, ending with a period
print(", ".join(palindromes) + ".")

```
## 🧠 Notes
Use helper functions for palindrome checks for clean and modular code.

Consider edge cases like:

No palindrome in range.

Lower limit equals upper limit and is a palindrome.