# Move Hyphens to Front

## Problem Statement

Implement the following function:

```cpp
char* MoveHyphen(char str[], int n);
```

The function accepts a string `str` of length `n`, which contains **alphabets and hyphens (-)**. The objective is to **move all hyphens in the string to the front**, maintaining the order of the other characters.

### Note

- Return `null` if the input string is `null`.

---

## ✍️ Example

### Input

```
str = "Move-Hyphens-to-Front"
```

### Output

```
"---MoveHyphenstoFront"
```

### Explanation

The input string "Move-Hyphens-to-Front" has 3 hyphens (`-`). The function moves them all to the **front** of the string, preserving the order of the remaining characters.

---

## ✅ Sample Input & Output

| Input             | Output                |
|------------------|------------------------|
| "String-Compare" | "-StringCompare"       |
| "C-O-D-E"        | "---CODE"              |
| "Hyphen-Test"    | "-HyphenTest"          |

---

## 🧠 Approach

1. Traverse the string.
2. Extract all hyphens and non-hyphen characters.
3. Concatenate hyphens + non-hyphen part.
4. Return the modified string.

---

## 💾 C++ Implementation

```cpp
#include <iostream>
#include <cstring>
using namespace std;

char* MoveHyphen(char str[], int n) {
    if (str == nullptr) return nullptr;

    string hyphenPart = "", otherPart = "";
    for (int i = 0; i < n; ++i) {
        if (str[i] == '-') {
            hyphenPart += '-';
        } else {
            otherPart += str[i];
        }
    }

    string result = hyphenPart + otherPart;
    strcpy(str, result.c_str());  // Copy result back to str
    return str;
}

// Sample usage
int main() {
    char str[] = "Move-Hyphens-to-Front";
    cout << MoveHyphen(str, strlen(str)) << endl;
    return 0;
}
```

---

## 🐍 Python Implementation

```python
def MoveHyphen(s: str) -> str:
    if s is None:
        return None

    hyphen_part = ''
    other_part = ''

    for char in s:
        if char == '-':
            hyphen_part += '-'
        else:
            other_part += char

    return hyphen_part + other_part

# Sample usage
if __name__ == "__main__":
    s = "Move-Hyphens-to-Front"
    print(MoveHyphen(s))
```

---

## 📌 Notes

- Time Complexity: **O(n)** — one pass through the string.
- Space Complexity: **O(n)** — for temporary strings.
- Works for both uppercase and lowercase alphabets.
- Handles null and edge case inputs gracefully.

---

