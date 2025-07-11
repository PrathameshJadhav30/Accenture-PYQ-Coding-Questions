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