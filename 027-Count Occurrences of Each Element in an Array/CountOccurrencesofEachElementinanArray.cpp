#include<iostream>
#include<unordered_map>
using namespace std;

void countFrequencies(int arr[], int n){
    unordered_map<int, int> frequency;

    for(int i = 0; i < n; i++){
        frequency[arr[i]]++;
    }

    for(auto pair : frequency){
        cout<<pair.first<<" - "<< pair.second << endl;
    }
}
int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);

    countFrequencies(arr, n);

    return 0;
}