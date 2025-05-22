#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_map<char, int> CharIndex;
    int maxLen = 0, start = 0;

    for(int end = 0; end < s.length(); end++){
        char Current = s[end];
        if(CharIndex.count(Current) && CharIndex[Current] >= start){
            start = CharIndex[Current] + 1;
        }
        CharIndex[Current] = end;
        maxLen = max(maxLen, end - start + 1);
    }
    return maxLen;
}

int main(){
    string s = "abcabcbb";
    cout<<"Length of Longest Substring: "<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}