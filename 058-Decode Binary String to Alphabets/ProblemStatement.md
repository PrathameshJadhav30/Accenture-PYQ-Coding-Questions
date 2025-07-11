# 🧩 Problem: Decode Binary String to Alphabets

## 📝 Problem Statement

You are provided with a string which has a sequence of `1`s and `0`s. This sequence is the encoded version of an English word. You are supposed to write a program to decode the provided string and find the original word.

Each uppercase English letter (A to Z) is represented by a binary code made of 1s and separated by 0s. The number of continuous 1s represents the position of the letter in the alphabet.

### 🔢 Input
A binary string, consisting only of characters `1` and `0`.

Example:

Input: 10110111

### ✅ Output
The decoded English word (all uppercase).

Example:

Output: ABC


### 🧠 Explanation
The binary sequence is: `1 0 1 1 0 1 1 1`

- 1 → A (1st letter)
- 11 → B (2nd letter)
- 111 → C (3rd letter)

---

## 💻 Solution in C++

```cpp
#include <iostream>
#include <string>
using namespace std;

string decodeBinaryString(string binary) {
    string result = "";
    int count = 0;
    
    for (char ch : binary) {
        if (ch == '1') {
            count++;
        } else {
            if (count > 0) {
                result += ('A' + count - 1);
                count = 0;
            }
        }
    }
    // Handle trailing 1s
    if (count > 0) {
        result += ('A' + count - 1);
    }

    return result;
}

int main() {
    string input;
    cout << "Enter binary string: ";
    cin >> input;
    
    string decoded = decodeBinaryString(input);
    cout << "Decoded Output: " << decoded << endl;

    return 0;
}
```
# 🐍 Solution in Python
```
def decode_binary_string(binary):
    result = ""
    count = 0
    
    for ch in binary:
        if ch == '1':
            count += 1
        else:
            if count > 0:
                result += chr(ord('A') + count - 1)
                count = 0
    # Handle trailing 1s
    if count > 0:
        result += chr(ord('A') + count - 1)
    
    return result

# Example usage
binary_input = input("Enter binary string: ")
decoded_output = decode_binary_string(binary_input)
print("Decoded Output:", decoded_output)
```