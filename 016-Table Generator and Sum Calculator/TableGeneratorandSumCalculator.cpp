#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;

    cout<<"Enter a Number: ";
    cin>>n;

    for(int i = 1; i <= 10; i++){
        int multiple = n * i;
        cout<< multiple;
        sum += multiple;
        if(i < 10){
            cout<<" , ";
        }
    }
    cout<<endl << sum << endl;

    return 0;
}