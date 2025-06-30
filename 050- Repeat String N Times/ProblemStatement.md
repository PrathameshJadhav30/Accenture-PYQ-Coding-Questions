# 🧮 Problem: Repeat String N Times

**Given** an integer `N` and a string `S`, your task is to return a new string that consists of the original string repeated `N` times.

---

### ✅ Input:
- N = 3  
- S = "abc"

### 🎯 Output:
- "abcabcabc"

---

## ✅ C++ Solution

```cpp
#include <iostream>
using namespace std;

string repeatString(int N, string S) {
    string result = "";
    for(int i = 0; i < N; i++) {
        result += S;
    }
    return result;
}

int main() {
    int N = 3;
    string S = "abc";

    string output = repeatString(N, S);
    cout << output << endl; // Output: abcabcabc

    return 0;
}
```
## ✅ Python Solution
```
def repeat_string(N, S):
    return S * N

# Example usage
N = 3
S = "abc"

output = repeat_string(N, S)
print(output)  # Output: abcabcabc
```