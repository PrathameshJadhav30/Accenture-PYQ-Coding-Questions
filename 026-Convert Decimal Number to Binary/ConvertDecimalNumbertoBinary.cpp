#include<iostream>
#include<string>
using namespace std;

string decimalToBinary(int n){
    if(n == 0){
        return "0";
    }
    string binary = " ";
    while(n > 0){
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}
int main(){
    int num;
    cout<<"Enter a Decimal Number: ";
    cin>>num;
    cout<<"Binary Representation : "<<decimalToBinary(num)<<endl;
    return 0;
}