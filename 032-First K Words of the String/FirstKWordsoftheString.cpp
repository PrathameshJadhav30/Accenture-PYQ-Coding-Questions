#include<iostream>
#include<string>
using namespace std;

void printFirstKwords(const string& str, int k){
    int spaceCount = 0;
    int i = 0;
    int len = str.length();

    while(i < len){
        cout << str[i];
        if(str[i] == ' '){
            spaceCount++;
            if(spaceCount == k){
                break;
            }
        }
        i++;
    }
}
int main(){
    string input = "Hello I am a passionate developer";
    int k = 4; 
    printFirstKwords(input, k);
    return 0;
}