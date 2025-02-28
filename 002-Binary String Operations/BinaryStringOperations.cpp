#include <iostream>
using namespace std;

int OperationsBinaryString(const string& str) {
    if (str.empty()){
        return -1;
    }
        
    int result = str[0] - '0';
    for (size_t i = 1; i < str.length(); i += 2) {
        char op = str[i];
        int num = str[i + 1] - '0';
        if (op == 'A'){
            result &= num;
        } else if (op == 'B'){
            result |= num;
        } else if (op == 'C'){
            result ^= num;
        }
    }
    return result;
}

int main() {
    cout << OperationsBinaryString("1C0C1C1A0B1") << endl; // Output: 1
    cout << OperationsBinaryString("0C1A1B1C1C1B0A0") << endl; // Output: 0
    return 0;
}