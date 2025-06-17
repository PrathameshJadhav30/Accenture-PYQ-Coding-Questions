#include<iostream>
using namespace std;

void MaxInArray(int arr[], int length){
    int maxVal = arr[0];
    int maxIndex = 0;

    for(int i = 1; i < length; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    cout<<"Max Value: " << maxVal << endl;
    cout<<"Index: "<<maxIndex <<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    MaxInArray(arr, length);
    
    return 0;
}