# Longest Substring Without Repeating Characters

## 📝 Problem Statement

Given a string `s`, find the **length of the longest substring** without repeating characters.

### Example:

- **Input:** `s = "abcabcbb"`
- **Output:** `3`
- **Explanation:** The answer is `"abc"`, with the length of `3`.

---

## 💡 Approach

This problem is best solved using the **Sliding Window Technique**.

### Intuition:
- We move a window along the string.
- We keep expanding the window by adding characters to a set/map.
- If we encounter a duplicate character, we shrink the window from the left until the duplicate is removed.

### Key Concepts:
- Two pointers (`start`, `end`) to maintain the current window.
- A data structure (set or map) to keep track of characters and their last seen index.
- Update the maximum length during the traversal.

---

## ✅ Python Solution

```python
def length_of_longest_substring(s: str) -> int:
    char_index = {}
    max_len = 0
    start = 0

    for end, char in enumerate(s):
        if char in char_index and char_index[char] >= start:
            start = char_index[char] + 1  # Move start after last occurrence
        char_index[char] = end
        max_len = max(max_len, end - start + 1)
    
    return max_len

# Example usage:
s = "abcabcbb"
print("Length of longest substring:", length_of_longest_substring(s))  # Output: 3
```
# ✅ C++ Solution
```
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLen = 0, start = 0;

    for (int end = 0; end < s.length(); ++end) {
        char current = s[end];
        if (charIndex.count(current) && charIndex[current] >= start) {
            start = charIndex[current] + 1;  // Move start after last occurrence
        }
        charIndex[current] = end;
        maxLen = max(maxLen, end - start + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring: " << lengthOfLongestSubstring(s) << endl;  // Output: 3
    return 0;
}
```
# 📌 Time and Space Complexity
- Time Complexity: O(n)

Each character is visited at most twice (once by end, once by start).

- Space Complexity: O(min(n, m))

n is the length of the string, m is the size of the character set (e.g., 26 for lowercase English letters).

# 📚 Additional Examples
Example 2:
Input: "bbbbb"

Output: 1 (Substring = "b")

Example 3:
Input: "pwwkew"

Output: 3 (Substring = "wke")

# 🔚 Conclusion
This classic sliding window problem is a favorite in interviews for testing efficient string processing and hashing techniques. Understanding this pattern helps in many similar problems involving substrings and sequences.