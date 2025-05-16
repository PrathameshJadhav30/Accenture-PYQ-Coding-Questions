# 📘 Problem: Print the First K Words of the String
# 📝 Problem Statement:
Given a sentence as a string and an integer K, print the first K words of the string.

## 🔢 Input:
A string S consisting of words separated by spaces.

An integer K, the number of words to print from the beginning.

## 🎯 Output:
The first K words of the string S, separated by a space.

#💡 Example:

**Input:**

S = "Hello I am a passionate developer"
K = 4

**Output:**

Hello I am a
# ✅ C++ Solution 
```
#include <iostream>
#include <string>
using namespace std;

// Function to print first K words of a given string
void printFirstKWords(const string& str, int k) {
    int spaceCount = 0;
    int i = 0;
    int len = str.length();

    while (i < len) {
        cout << str[i];
        if (str[i] == ' ') {
            spaceCount++;
            if (spaceCount == k){
               break;
            } 
        }
        i++;
    }
}

int main() {
    string input = "Hello I am a passionate developer";
    int k = 4;
    printFirstKWords(input, k);
    return 0;
}
```
# 🔍 Explanation:
The function printFirstKWords() iterates through the string character by character.

It prints each character until it has encountered K spaces (indicating the end of the Kth word).

This avoids splitting the string into a new structure, making it space and time-efficient.

# ✅ Python Solution
```
def print_first_k_words(sentence, k):
    words = sentence.split()
    print(' '.join(words[:k]))

# Example usage
sentence = "Hello I am a passionate developer"
k = 4
print_first_k_words(sentence, k)
```