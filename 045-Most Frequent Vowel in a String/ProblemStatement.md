# Problem: Most Frequent Vowel in a String

## Problem Statement:
You are given a string `str` of length `n`. You have to find the most frequent vowel in the string `str`.

**Note:** You may assume that `str` will always have a unique most frequent vowel.

### Sample Input:
6

xyuaab

---
### Explanation:
Vowel `a` appears twice and more than any other vowels.

---
## ✅ C++ Code (Function-Based & Efficient):
```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to return the most frequent vowel
char getMostFrequentVowel(const string& str) {
    vector<int> vowelCount(5, 0); // Indexes: 0-a, 1-e, 2-i, 3-o, 4-u
    for (char ch : str) {
        switch (tolower(ch)) {
            case 'a': vowelCount[0]++; break;
            case 'e': vowelCount[1]++; break;
            case 'i': vowelCount[2]++; break;
            case 'o': vowelCount[3]++; break;
            case 'u': vowelCount[4]++; break;
        }
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (vowelCount[i] > vowelCount[maxIndex]) {
            maxIndex = i;
        }
    }

    return "aeiou"[maxIndex];
}

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    char result = getMostFrequentVowel(str);
    cout << result << endl;

    return 0;
}
```

---

## ✅ Python Code :
```python
def get_most_frequent_vowel(s: str) -> str:
    vowels = "aeiou"
    count = {v: 0 for v in vowels}

    for ch in s:
        ch = ch.lower()
        if ch in count:
            count[ch] += 1

    # Return vowel with max frequency
    return max(count, key=count.get)

# Input
n = int(input())
s = input()

# Output
print(get_most_frequent_vowel(s))
```