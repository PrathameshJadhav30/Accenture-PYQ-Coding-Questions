# Problem: Count Permutations with Vowel Positions Fixed

**Problem Statement**  
You are given a string `S` and your task is to find and return the count of permutations formed by fixing the positions of the vowels present in the string.

**Input**:  
`ABC`  
**Output**:  
`2`

**Explanation**:  
'A' is a vowel and will remain at its position. The remaining characters `B` and `C` will be permuted among themselves, resulting in `2` permutations (`BC` and `CB`).

---

## ✅ C++ Code

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int countPermutationsWithFixedVowels(string s) {
    int consonants = 0;
    for (char ch : s) {
        if (!isVowel(ch)) {
            consonants++;
        }
    }
    return factorial(consonants);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int result = countPermutationsWithFixedVowels(s);
    cout << "Output: " << result << endl;
    return 0;
}
```
# ✅ Python Code
```
def is_vowel(ch):
    return ch.lower() in 'aeiou'

def factorial(n):
    return 1 if n <= 1 else n * factorial(n - 1)

def count_permutations_with_fixed_vowels(s):
    consonants = [ch for ch in s if not is_vowel(ch)]
    return factorial(len(consonants))

# Input and Output
s = input("Enter a string: ")
result = count_permutations_with_fixed_vowels(s)
print("Output:", result)
```