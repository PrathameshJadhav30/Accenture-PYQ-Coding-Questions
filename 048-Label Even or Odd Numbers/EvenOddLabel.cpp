#include<iostream>
#include<vector>
using namespace std;

string labelEvenOrOddNumbers(const vector<int>& arr) {
    string result;
    for (int num : arr) {
        if (num % 2 == 0) {
            result += "Even ";
        } else {
            result += "Odd ";
        }
    }
    return result;
}
int main() {
    int N = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    string output = labelEvenOrOddNumbers(arr);
    cout << output << endl;  // Output: odd even odd even odd even

    return 0;
}