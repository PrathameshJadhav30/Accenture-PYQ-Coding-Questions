# 🧠 Problem Statement: Longest Word Finder
# Description:
Rohan is a kid who has just learned about creating words from alphabets. He has written some words in the notepad of his father's laptop. Now his father wants to find the longest word written by Rohan using a computer program.

Your task is to write a program that takes a space-separated list of words and returns the longest word among them.

## 🧮 Input
A single line containing a list of space-separated strings.

## Example:

yes no number
## 🎯 Output

Print the longest string from the input.

**Example:**

The longest string is: number

# 📘 Algorithm (Step-by-step):
- Read the input line and split it into individual words.

- Initialize a variable to hold the longest word.

- Loop through each word and compare its length with the current longest.

- Update the longest word if a longer word is found.

- Print the longest word.

# 💻 C++ Implementation
```
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input, word, longest = "";
    getline(cin, input);  // Read entire line

    stringstream ss(input);  // Use stringstream to split words
    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "The longest string is: " << longest << endl;
    return 0;
}
```
# 🐍 Python Implementation
```
input_line = input("Enter words separated by spaces: ")
words = input_line.split()

longest = ""
for word in words:
    if len(word) > len(longest):
        longest = word

print("The longest string is:", longest)
```
## 🧪 Sample Input & Output
**Input:**

yes no number

**Output:**

The longest string is: number
