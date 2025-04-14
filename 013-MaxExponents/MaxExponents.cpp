#include<iostream>
using namespace std;

int countExponentOf2(int n){
    int Count = 0;
    while(n % 2 == 0){
       Count++;
       n/=2;
    }

    return Count;
}
int MaxExponents(int a, int b){
     int MaxNum = a;
     int MaxExp = countExponentOf2(a);

     for (int i = a+1; i <= b; i++){
        int CurrentExp = countExponentOf2(i);
        if(CurrentExp > MaxExp || (CurrentExp == MaxExp && i < MaxExp)){
            MaxExp = CurrentExp;
            MaxNum = i;
        }
     }
     return MaxNum;
}
int main() {
    int a = 7, b = 12;
    cout << "Number with maximum exponent of 2: " << MaxExponents(a, b) << endl;
    return 0;
}