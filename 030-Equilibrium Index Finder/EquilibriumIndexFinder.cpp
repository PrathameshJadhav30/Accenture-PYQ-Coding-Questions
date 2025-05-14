#include<iostream>
#include<vector>
using namespace std;

int findEquilibriumIndex(vector<int>& arr){
    int totalSum = 0;
    for(int i = 0; i < arr.size(); i++){
        totalSum += arr[i];
    }

    int leftSum = 0;
    for(int i = 0; i < arr.size(); i++){
        totalSum -= arr[i];
        if(leftSum == totalSum){
            return i;
        }

        leftSum += arr[i];
    }
    return -1;
}
int main(){
    vector<int> arr = {3, 4, 3, 1, 6};
    int index = findEquilibriumIndex(arr);

    cout<<"Equilibrium Index: " << index << endl; 
    return 0;
}