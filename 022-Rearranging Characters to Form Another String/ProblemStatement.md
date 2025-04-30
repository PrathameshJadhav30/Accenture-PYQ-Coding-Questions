# Rearranging Characters to Form Another String

## 📝 Problem Statement

You are given two strings, `s` and `t`. Your task is to determine if it's possible to rearrange the characters of `s` to form the string `t`.

Return `True` if possible, otherwise return `False`.

### ✅ Constraints

- 1 ≤ length of `s`, `t` ≤ 1000

---

## 📥 Input

Two strings:

s = "listen" t = "silent"

## 📤 Output

True


---

## 🔓 Logic

To check if one string can be rearranged to form another:

1. Both strings must have the same length.
2. Both must contain the exact same characters with the same frequency.
3. So, sorting both and comparing them will work.

---

## 🐍 Python Code

```python
def can_rearrange(s, t):
    return sorted(s) == sorted(t)

# Example usage
s = "listen"
t = "silent"
print(can_rearrange(s, t))  # Output: True
```
# 💻 C++ Code
```
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool canRearrange(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    string s = "listen";
    string t = "silent";

    if (canRearrange(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
```
# 🔍 Explanation
sort(s.begin(), s.end()) rearranges the string in alphabetical order.

If both sorted strings are equal, then t can be formed by rearranging s.

Works for any string of valid length within the given constraint.

