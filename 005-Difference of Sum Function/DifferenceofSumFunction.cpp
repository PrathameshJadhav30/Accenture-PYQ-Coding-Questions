#include<iostream>
using namespace std;

int differenceofSum(int n, int m){
    int Divisible_Sum = 0;
    int NonDivisible_Sum = 0;
    for(int i = 1; i <= m; i++){
        if(i % n == 0){
            Divisible_Sum += i;
        }
        else{
           NonDivisible_Sum += i;
        }
     }
     return NonDivisible_Sum - Divisible_Sum;
}

int main(){
    int  n = 3;
    int m = 10;
    int result = differenceofSum(n, m);
    cout<<"Difference of Sum:"<< result << endl;
    return 0;
}
