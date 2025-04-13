#include<iostream>
using namespace std;

int OperationChoices(int c, int a, int b){
    if(c == 1){
        return a+b;
    }
    else if(c == 2){
        return a - b;
    }
    else if(c == 3){
        return a*b;
    }
    else if(c == 4){
        return a/b;
    }
    else{
        return 0;
    }
}
int main(){
    int c,a,b;
    cout<<"Enter a Operation Choice(1-4): ";
    cin>>c;

    cout<<"Enter a Values Of a And b: ";
    cin>>a>>b;

    cout<<"Result: "<<OperationChoices(c,a,b)<<endl;

    return 0;
}