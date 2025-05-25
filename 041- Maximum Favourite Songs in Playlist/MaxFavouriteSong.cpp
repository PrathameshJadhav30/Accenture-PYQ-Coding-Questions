#include<iostream>
#include<string>
using namespace std;

int maxFavouriteSongs(string s, int k){
    int maxcount = 0;
    int Count = 0;

    for(int i = 0; i < k; i++){
        if(s[i] == 'a'){
            Count++;
        }
    }
    maxcount = Count;

    for(int i = k; i < s.length(); i++){
        if(s[i - k] == 'a'){
            Count--;
        }
        if(s[i] == 'a'){
            Count++;
        }
        maxcount = max(maxcount, Count);
    }
    return maxcount;
}
int main() {
    string S = "acdbaaca";
    int K = 3;
    cout << maxFavouriteSongs(S, K) << endl; // Output: 2
    return 0;
}