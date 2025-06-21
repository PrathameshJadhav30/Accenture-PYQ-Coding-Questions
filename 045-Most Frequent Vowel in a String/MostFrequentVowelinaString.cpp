#include<iostream>
#include<vector>
using namespace std;

char getMostFrequentVowel(const string& str){
    vector<int> vowelCount(5, 0);

    for(char ch : str){
        switch(tolower(ch)){
            case 'a':
                   vowelCount[0]++;
                   break;
            case 'e':
                   vowelCount[1]++;
                   break;
            case 'i':
                   vowelCount[2]++;
                   break;
            case 'o':
                   vowelCount[3]++;
                   break;
            case 'u':
                   vowelCount[4]++;
                   break;
        }
    }

    int maxIndex = 0;
    for(int i = 1; i < 5; i++){
        if(vowelCount[i] > vowelCount[maxIndex]){
            maxIndex = i;
        }
    }
    return "aeiou"[maxIndex];
}

int main(){
    int n;
    cin>> n;
    string str;
    cin>>str;

    char result = getMostFrequentVowel(str);
    cout<< result << endl;

    return 0;
}