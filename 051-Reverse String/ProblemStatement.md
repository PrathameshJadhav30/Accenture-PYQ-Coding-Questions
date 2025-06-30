# Reverse String - 

## 🧩 Problem Statement

Write a function to reverse a given string.

## 🔧 Function Signature

```cpp
void ReverseString(char str[], int n);
```
The function takes a character array str[] of length n and reverses it in-place.

## 📝 Assumptions
String contains only lowercase or uppercase alphabetical characters.

Null character ('\0') is not counted in length n.

Reverse is to be performed in-place (i.e., no extra array).

## 📥 Input
A character array (string) str[]

An integer n – the length of the string (excluding null character)

## 📤 Output
The input string reversed in-place.

## 📌 Example

**Input:**

str = "hello"

n = 5

**Output:**

"olleh"

# 💻 C++ Code
```
#include <iostream>
using namespace std;

void ReverseString(char str[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        // Swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

// Driver code
int main() {
    char str[] = "hello";
    int n = sizeof(str) - 1; // excluding null terminator

    ReverseString(str, n);
    cout << "Reversed String: " << str << endl;

    return 0;
}
```
---
# 💻 C++ Code
```
#include <iostream>
#include <utility>  // for std::swap
using namespace std;

void ReverseString(char str[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        swap(str[left], str[right]); // using built-in swap
        left++;
        right--;
    }
}

// Driver code
int main() {
    char str[] = "apples";
    int n = sizeof(str) - 1; // excluding null character

    ReverseString(str, n);
    cout << "Reversed String: " << str << endl;

    return 0;
}
```
# 💻 Python Code
```
def reverse_string(s: str) -> str:
    if s is None:
        return None
    return s[::-1]

# Driver code
s = "hello"
result = reverse_string(s)
print("Reversed String:", result)
```