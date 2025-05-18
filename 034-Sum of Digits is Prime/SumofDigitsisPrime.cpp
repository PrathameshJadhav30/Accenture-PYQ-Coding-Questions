#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num < 2){
        return false;
    }
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>> n;
    int digitSum = sumOfDigits(n);
    if(isPrime(digitSum)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}