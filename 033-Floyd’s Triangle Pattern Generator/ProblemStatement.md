# Floyd’s Triangle Pattern Generator

## 🧩 Problem Statement

You have been given an integer `N` as input. Your task is to write a program to print `N` rows of **Floyd’s Triangle**.

**Floyd's Triangle** is a right-angled triangular array of natural numbers used for the numbering of lines in a printout.

### ✅ Input:
- A single integer `N` denoting the number of rows in the triangle.

### 📤 Output:
- Print the triangle consisting of natural numbers in `N` rows.

### 📌 Example:

**Input:**  

4


**Output:**  

1

23

456

78910


---

## 🚀 Approach

- Initialize a counter starting from `1`.
- Use two nested loops:
  - The outer loop runs from `1` to `N` (for rows).
  - The inner loop runs from `1` to `i` (for printing elements in each row).
- In each iteration of the inner loop, print the current counter and increment it.

---

## 💻 C++ Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}
```
# 🧪 Sample Input

4

# 🎯 Sample Output

1

23

456

78910

# 🐍 Python Code
```

N = int(input("Enter a N: "))

num = 1

for i in range(1, N + 1):
    for j in range(i):
        print(num, end='')
        num += 1
    print()
```
# 📚 Time and Space Complexity
Time Complexity: O(N²) → Due to nested loops up to N

Space Complexity: O(1) → Only a counter variable used

# 📝 Notes
Make sure no spaces are printed between numbers in a row.

Can be used as a classic pattern printing question in interviews or competitive programming.

