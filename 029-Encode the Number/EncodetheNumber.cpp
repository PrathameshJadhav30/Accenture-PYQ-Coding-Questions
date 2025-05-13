#include<iostream>
#include<string>
using namespace std;

int encodeNumber(int N){
    string strN = to_string(N);
    string result = " ";

    for(int i = 0; i < strN.length(); i++){
        int digit = strN[i] - '0';
        int square = digit * digit;
        result += to_string(square);
    }

    return stoi(result);
}
int main(){
    int N = 34;
    cout<<encodeNumber(N) << endl; // Output: 916
    return 0;
}