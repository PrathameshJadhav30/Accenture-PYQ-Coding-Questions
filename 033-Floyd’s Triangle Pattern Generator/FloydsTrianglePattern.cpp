#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a N: ";
    cin>> N;

    int num = 1;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout<< num;
            num++;
        }
        cout<< endl;
    }
    return 0;
}