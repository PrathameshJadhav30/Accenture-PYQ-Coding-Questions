#include<iostream>
#include<string>
using namespace std;

bool isMagical(int num){
    string binary = "";
    while(num > 0){
        binary = (char)((num % 2) + '0') + binary;
        num /= 2; 
    }

    int sum = 0;
    for(char ch : binary){
        if(ch == '0'){
            sum += 1;
        }
        else if(ch == '1'){
            sum += 2;
        }
    }
    return sum % 2 == 1;
}

int countMagicalNumbers(int N){
    int count = 0;
    for(int i = 1; i <= N; i++){
        if(isMagical(i)){
            count++;
        }
    }
    return count;
}
int main(){
    int N;
    cout<<"Enter a Number: ";
    cin >> N;
    cout<< countMagicalNumbers(N) <<endl;
    return 0;
}