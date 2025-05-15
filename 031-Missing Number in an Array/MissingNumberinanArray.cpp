#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int n){
    int total = n * (n + 1)/ 2;

    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return total - sum;
}
int main(){
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;
    cout<<"Missing Number: "<<findMissingNumber(arr,n)<<endl;
    return 0;
}