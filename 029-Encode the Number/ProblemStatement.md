# Encode the Number

## Problem Statement

You work in the message encoding department of a national security message agency. Every message that is sent from or received in your office is encoded. You have an integer `N`, and each digit of `N` is **squared** and the squares are **concatenated** together to encode the original number.  

Your task is to **find and return an integer** value representing the encoded value of the number.

---

## Input Specification

- `input1`: An integer `N` representing the number to be encoded.

---

## Output Specification

- Return an integer value representing the encoded value of the number.

---

## Example

**Input1**:  
`34`

**Output**:  
`916`

**Explanation**:  
The given number is `34`.  
- Digit `3` squared is `9`  
- Digit `4` squared is `16`  
Concatenating these: `9` and `16` gives `916`.  
So, the output is: `916`

---
# C++ Solution
```
#include <iostream>
#include <string>
using namespace std;

int encodeNumber(int N) {
    string strN = to_string(N);
    string result = "";

    for (int i = 0; i < strN.length(); i++) {
        int digit = strN[i] - '0';
        int square = digit * digit;
        result += to_string(square);
    }

    return stoi(result);
}

int main() {
    int input1 = 34;
    cout << encodeNumber(input1);  // Output: 916
    return 0;
}
```
## Python Solution 

```
def encode_number(N):
    encoded = ''
    str_N = str(N)
    for i in range(len(str_N)):
        digit = int(str_N[i])
        square = digit * digit
        encoded += str(square)
    return int(encoded)

# Example usage:
input1 = 34
print(encode_number(input1))  # Output: 916
```
