#include<iostream>
#include<cstring>
using namespace std;

void Swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void ReverseString(char str[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        Swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main(){
    char str[] = "Hello, World!";
    int n = sizeof(str) / sizeof(str[0]) - 1; // Exclude null terminator

    ReverseString(str, n);
    
    cout << "Reversed String: " << str << endl;
    return 0;
}