# Problem: Length of Last Word

## Problem Statement

Given a string `S` consisting of **words and spaces**, return the **length of the last word** in the string. A **word** is a maximal substring consisting of non-space characters only.

---

## Input

A string `S` that may contain leading, trailing, or multiple spaces between words.

### Example

**Input:**

" I am a passionate Developer "

**Output:**

9


**Explanation:**
- The last word is `"Developer"`.
- It has `9` characters.
- Spaces before or after the last word should be ignored.

---

## Edge Cases

| Input                      | Output | Reason                                  |
|---------------------------|--------|-----------------------------------------|
| `"Hello World"`           | `5`    | Last word is `"World"`                  |
| `"   "`                   | `0`    | No word present                         |
| `"a"`                     | `1`    | Single character word                   |
| `"test   "`               | `4`    | Last word is `"test"`                   |
| `"OpenAI GPT models "`    | `6`    | Last word is `"models"`                 |

---

## Python Implementation

```python
def length_of_last_word(s: str) -> int:
    words = s.strip().split()
    if not words:
        return 0
    return len(words[-1])

# Example
s = "  I am  a passionate   Developer  "
print(length_of_last_word(s))  # Output: 9
```

# C++ Implementation
```
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    istringstream iss(s);
    string word, lastWord;

    while (iss >> word) {
        lastWord = word;
    }

    return lastWord.length();
}

// Example usage
int main() {
    string s = "  I am  a passionate   Developer  ";
    cout << lengthOfLastWord(s) << endl; // Output: 9
    return 0;
}
```
# Time and Space Complexity
| Language | Time Complexity | Space Complexity |
| -------- | --------------- | ---------------- |
| Python   | O(n)            | O(n)             |
| C++      | O(n)            | O(n)             |

# Notes
Use strip() to remove leading/trailing spaces in Python.

Use istringstream for word extraction in C++.

Do not count trailing spaces as part of the last word.
