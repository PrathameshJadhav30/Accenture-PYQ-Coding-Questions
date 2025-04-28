#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int FindAutoCount(string n) {
    if (n.empty()) {
        return 0;
    }
    int length = n.length();
    vector<int> count(10, 0); 

    // Count occurrences of each digit
    for (int i = 0; i < length; i++) {
        int digit = n[i] - '0';
        count[digit]++;
    }

    // Validate if the number is autobiographical
    for (int i = 0; i < length; i++) {
        int expected_count = n[i] - '0';
        if (count[i] != expected_count){
            return 0;
        }
            
    }

    // Count unique digits
    unordered_set<char> uniqueDigits;
    for (int i = 0; i < length; i++) {
        uniqueDigits.insert(n[i]);
    }

    return uniqueDigits.size();
}

int main() {
    string n;
    cout << "Enter the number: ";
    cin >> n;
    cout << FindAutoCount(n) << endl;
    return 0;
}