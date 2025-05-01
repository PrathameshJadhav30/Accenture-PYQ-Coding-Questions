#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int binary){
    int decimal = 0 , base = 1;

    while(binary > 0){
        int last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}
int main(){
    int binary;
    cout<<"Enter a Binary Number: ";
    cin>>binary;

    cout<<"Decimal: "<< BinaryToDecimal(binary)<<endl;
    return 0;
}