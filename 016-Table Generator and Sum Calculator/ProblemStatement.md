# 📊 Table Generator and Sum Calculator

## 📝 Problem Statement

Write a program to **display the multiplication table** (first 10 multiples) of a given number and **print the sum** of all these multiples.

---

## 📌 Instructions

- Implement the program using **C++** and **Python**.
- Ensure your code is **logically and syntactically correct**.
- Use standard input to read the number.
- The output should display:
  1. All 10 multiples of the given number.
  2. The **sum** of those multiples.

---

## 🔢 Input Format

- A single integer `n`, representing the number for which the table is to be generated.

---

## 🎯 Output Format

- The 10 multiples of `n`, comma-separated.
- The sum of those 10 multiples on a new line.

---

## ✅ Test Cases

### Test Case 1:
**Input:**

5


**Expected Output:**

5, 10, 15, 20, 25, 30, 35, 40, 45, 50

275


---

### Test Case 2:
**Input:**

12

**Expected Output:**

12, 24, 36, 48, 60, 72, 84, 96, 108, 120 

660

---

## 💻 C++ Implementation

```
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        int multiple = n * i;
        cout << multiple;
        sum += multiple;
        if (i < 10){
          cout << ", ";
        } 
    }
    cout << endl << sum << endl;

    return 0;
}

```

## 🐍 Python Implementation
```
n = int(input())
sum_ = 0

for i in range(1, 11):
    multiple = n * i
    print(multiple, end=", " if i < 10 else "\n")
    sum_ += multiple

print(sum_)

```
## 📘 Notes
Use loops efficiently to generate and sum the table values.

Ensure formatting is exactly as expected for cleaner output.

Try testing with other values to verify correctness.