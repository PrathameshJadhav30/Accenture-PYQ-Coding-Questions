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