#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if word ends with given suffix
bool endsWith(const string& word, const string& suffix) {
    if (word.length() < suffix.length()) return false;
    return word.compare(word.length() - suffix.length(), suffix.length(), suffix) == 0;
}

// Function to find rhyming words
vector<string> findRhymes(const vector<string>& words, const string& target, int suffixLen = 3) {
    vector<string> rhymes;
    if (target.length() < suffixLen) return rhymes;

    string suffix = target.substr(target.length() - suffixLen);
    for (const string& word : words) {
        if (word != target && endsWith(word, suffix)) {
            rhymes.push_back(word);
        }
    }
    return rhymes;
}

int main() {
    vector<string> words = {"cat", "bat", "rat", "mat", "chat", "hat", "flat", "gnat"};
    string target = "flat";

    vector<string> rhymingWords = findRhymes(words, target);

    cout << "Words that rhyme with '" << target << "': ";
    for (const string& word : rhymingWords) {
        cout << word << " ";
    }

    return 0;
}