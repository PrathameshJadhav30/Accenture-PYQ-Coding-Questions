#include<iostream>
using namespace std;

void MaxInArray(int arr[], int length){
    int MaxVal = arr[0];
    int MaxIndex = 0;

    for(int i = 1; i < length; i++){
        if(arr[i] > MaxVal){
            MaxVal = arr[i];
            MaxIndex = i;
        }
    }
    cout<<"Maximum Value: "<<MaxVal<<endl;
    cout<<"Index of Maximum Value: "<<MaxIndex<<endl;
}   

int main(){
    int arr[] = {1, 3, 5,7, 9, 3, 2, 8, 10, 13};
    int length = sizeof(arr)/ sizeof(arr[0]);

    MaxInArray(arr, length);

    return 0;
}