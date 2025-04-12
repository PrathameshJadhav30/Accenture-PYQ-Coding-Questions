# Problem Statement: ReplaceCharacter Function

## Description

You are given a function:

```cpp
void *ReplaceCharacter(char str[], int n, char ch1, char ch2);
```

The function accepts a string `str` of length `n` and two characters `ch1` and `ch2` as its arguments. Implement the function to **modify and return** the string `str` in such a way that:

- All occurrences of `ch1` in the original string are replaced by `ch2`
- All occurrences of `ch2` in the original string are replaced by `ch1`

### Assumptions:
- The string contains only lower-case alphabetical letters.

## Constraints:
- Return `NULL` if the input string is `NULL`.
- If both characters are the same or both are not present in the string, return the string unchanged.

---

## Example:

### Input:
```
str = "apples"
ch1 = 'a'
ch2 = 'p'
```

### Output:
```
paales
```

### Explanation:
- `'a'` is replaced with `'p'`
- `'p'` is replaced with `'a'`

Resulting in `"paales"`.

---

## Function Signature (C++)

```cpp
string ReplaceCharacter(string str, char ch1, char ch2);
```

---

## Implementation in C++ (with normal `for` loop)

```cpp
#include <iostream>
#include <string>
using namespace std;

string ReplaceCharacter(string str, char ch1, char ch2) {
    if (str.empty()) return "";

    if (ch1 == ch2) return str;

    bool found_ch1 = false;
    bool found_ch2 = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch1) found_ch1 = true;
        if (str[i] == ch2) found_ch2 = true;
    }

    if (!found_ch1 && !found_ch2) return str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch1) {
            str[i] = '#';  // temp placeholder
        } else if (str[i] == ch2) {
            str[i] = ch1;
        }
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '#') {
            str[i] = ch2;
        }
    }

    return str;
}

int main() {
    string str = "apples";
    char ch1 = 'a', ch2 = 'p';

    string result = ReplaceCharacter(str, ch1, ch2);
    cout << "Modified String: " << result << endl;

    return 0;
}
```

---

## Function Signature (Python)

```python
def replace_character(s: str, ch1: str, ch2: str) -> str:
```

---

## Implementation in Python (with normal `for` loop)

```python
def replace_character(s: str, ch1: str, ch2: str) -> str:
    if s is None:
        return None

    if ch1 == ch2:
        return s

    found_ch1 = False
    found_ch2 = False

    for i in range(len(s)):
        if s[i] == ch1:
            found_ch1 = True
        elif s[i] == ch2:
            found_ch2 = True

    if not found_ch1 and not found_ch2:
        return s

    temp = []

    for i in range(len(s)):
        if s[i] == ch1:
            temp.append('#')
        elif s[i] == ch2:
            temp.append(ch1)
        else:
            temp.append(s[i])

    for i in range(len(temp)):
        if temp[i] == '#':
            temp[i] = ch2

    result = ""
    for i in range(len(temp)):
        result += temp[i]

    return result

# Sample test
if __name__ == "__main__":
    s = "apples"
    ch1 = 'a'
    ch2 = 'p'
    result = replace_character(s, ch1, ch2)
    print("Modified String:", result)
```

---

## Output:
```
Modified String: paales
```
