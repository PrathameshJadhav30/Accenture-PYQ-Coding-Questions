#include<iostream>
#include<vector>
using namespace std;

int minSwitchPresses(vector<int>&A){
    int toggle = 0;
    int Count = 0;

    for(int i = 0; i < A.size(); i++){
        int CurrentState = A[i] ^ toggle;
        if(CurrentState == 0){
            Count++;
            toggle ^= 1;
        }
    }
    return Count;
}

int main(){
    vector<int> A = {0, 1, 0, 1};
    cout<<"Minimum Switches: "<<minSwitchPresses(A)<<endl;
    return 0;
}