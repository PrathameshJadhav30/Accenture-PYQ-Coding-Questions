#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string line;
    cout<<"Enter a string: ";
    getline(cin, line);

    stringstream ss(line);
    vector<string> words;
    string word;

    while(ss >> word){
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    for(int i = 0; i < words.size(); i++){
        cout << words[i];
        if(i < words.size() - 1) 
        {
            cout << " ";
        }
    }
    return 0;
}