#include<iostream>
#include<string>
using namespace std;

string ReplaceCharacter(string str, char ch1, char ch2){
    if(str.empty()){
        return "";
    }

    if(ch1 == ch2){
        return str;
    }
    bool found_ch1 = false;
    bool found_ch2 = false;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ch1){
            found_ch1 = true;
        }
        if(str[i] == ch2){
            found_ch2 = true;
        }   
    }
    if(!found_ch1 && !found_ch2){
        return str;
    }

    for(int  i = 0; i < str.length(); i++){
        if(str[i] == ch1){
            str[i] = '#';
        }else if(str[i] == ch2){
            str[i] = ch1;
        }
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '#') {
            str[i] = ch2;
        }
    }

    return str;
}
int main() {
    string str = "apples";
    char ch1 = 'a';
    char ch2 = 'p';

    string result = ReplaceCharacter(str, ch1, ch2);

    cout << "Original String: " << str << endl;
    cout << "Characters to swap: '" << ch1 << "' and '" << ch2 << "'" << endl;
    cout << "Modified String: " << result << endl;

    return 0;
}