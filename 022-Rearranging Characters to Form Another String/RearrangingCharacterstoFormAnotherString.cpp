#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool canRearrange(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}
int main(){
    string s ="listen";
    string t = "silent";

    if(canRearrange(s, t)){
        cout << "Yes, the strings can be rearranged to form each other." << endl;
    }else{   
        cout << "No, the strings cannot be rearranged to form each other." << endl;
    }
    return 0;
}