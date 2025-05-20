#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int lengthOfLastWord(string s){
    istringstream iss(s);
    string word, lastWord;

    while(iss >> word){
        lastWord = word;
    }

    return lastWord.length();
}

int main(){
     string s = "  I am  a passionate   Developer  ";
     cout<< lengthOfLastWord(s) << endl;

     return 0;
}