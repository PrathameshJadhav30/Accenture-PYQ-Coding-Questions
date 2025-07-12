#include<iostream>
using namespace std;

int SumofBinaryDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 2; // Add the last binary digit
        n /= 2;       // Remove the last binary digit
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = SumofBinaryDigits(n);
    cout << "Sum of binary digits: " << result << endl;
    return 0;
}