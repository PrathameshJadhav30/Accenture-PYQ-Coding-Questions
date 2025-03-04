#include <iostream>
#include <cctype>
using namespace std;

bool CheckPassword(const string& str) {
    int n = str.length();
    if (n < 4 || isdigit(str[0])){
        return false;
    } 

    bool hasDigit = false, hasUpper = false;

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (isspace(ch) || ch == '/'){
            return false;
        } 
        if (isdigit(ch)){
            hasDigit = true;
        } 
        if (isupper(ch)){
            hasUpper = true;
        }
    }
    return hasDigit && hasUpper;
}

int main() {
    string input;
    cout<<"Enter the password: ";
    getline(cin, input);
    cout << CheckPassword(input) << endl;
    return 0;
}
