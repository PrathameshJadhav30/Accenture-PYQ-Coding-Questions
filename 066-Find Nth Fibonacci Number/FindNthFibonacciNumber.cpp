#include<iostream>
using namespace std;
 int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int a = 0, b = 1, c;

    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b; 
        b = c;
    }
    return b;
 }
 int main() {
    int n;
    cout << "Enter the index (n): ";
    cin >> n;

    cout << "Nth Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}