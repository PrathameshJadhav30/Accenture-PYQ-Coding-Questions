#include<iostream>
using namespace std;    

int Calculate(int m, int n){
    int Sum = 0;

    for(int i = m; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            Sum += i;
        }
    }
    return Sum;
}
int main() {
    int m = 12, n = 50;
    cout << "Sum of numbers divisible by both 3 and 5: " << Calculate(m, n) << endl;
    return 0;
}