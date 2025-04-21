#include<iostream>
using namespace std;

bool isPalindrome(int num){
    int original = num, reversed = 0;
    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main(){
    int lower, upper;
    char comma;
    cout << "Enter the range (lower, upper): ";
    cin >> lower >> comma >> upper;
    cout << "Palindrome numbers in the range [" << lower << ", " << upper << "] are: ";
    for(int i = lower; i <= upper;i++){
        if(isPalindrome(i)){
            cout<< i << " ";
        }
    }
    cout << endl;
    return 0;
}