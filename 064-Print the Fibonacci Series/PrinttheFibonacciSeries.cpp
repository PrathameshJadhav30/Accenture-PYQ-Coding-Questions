#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a = 0, b = 1;
    for(int i = 1; i <= n; i++){
        cout<< a<<" ";
        int next = a + b;
        a = b; 
        b = next;
    }
}
int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    printFibonacci(n);

    return 0;
}