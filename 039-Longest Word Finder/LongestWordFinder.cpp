#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string input, word, longest ="";
    cout<<"Enter a String: ";
    getline(cin, input);

    stringstream ss(input);

    while(ss >> word){
        if(word.length() > longest.length()){
            longest = word;
        }
    }

    cout<<"The Longest String is: "<<longest <<endl;
    return 0;
}