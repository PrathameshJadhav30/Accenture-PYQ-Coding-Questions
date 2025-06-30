#include<iostream>
using namespace std;

string repeatString(int N, string s){
    string result = "";
    for(int i = 0; i < N; i++){
        result += s; // Append the string s to result N times
    }
    return result;
}

int main(){
    int N = 3;
    string s = "ABC";

    string output = repeatString(N, s);
    cout << output << endl; // Output: ABCABCABC
    return 0;
}