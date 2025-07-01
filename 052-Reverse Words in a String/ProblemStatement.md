# Problem: Reverse Words in a String 

**Input:**  
A single line of text containing words separated by spaces. The input string consists of only printable ASCII characters.

**Output:**  
The string with words reversed in order.

---

## ✅ Example
**Input:**  
Hello World

**Output:**  
World Hello

---

## ✅ C++ Code
```cpp
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line); // Read the full line including spaces

    stringstream ss(line);
    vector<string> words;
    string word;

    // Split the line into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the vector of words
    reverse(words.begin(), words.end());

    // Print the reversed words
    for (int i = 0; i < words.size(); i++) {
        cout << words[i];
        if (i != words.size() - 1) cout << " ";
    }

    return 0;
}
```

## ✅ Python Code
```python
# Read the full line from input
line = input()

# Split the string into words
words = line.split()

# Reverse the list of words
reversed_words = words[::-1]

# Join the words back into a string
output = ' '.join(reversed_words)

print(output)