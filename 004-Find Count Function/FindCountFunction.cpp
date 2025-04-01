#include<iostream>
#include<cmath>
using namespace std;

int findCount(int arr[], int length, int num, int diff)
{
    int count = 0;
    for(int i = 0; i < length; i++){
        if(abs(arr[i] - num) <= diff){
            count++;
        }
    }
    if(count > 0){
        return count;
    }else{
        return -1;
    }
}

int main(){
    int arr[] = {12,3,14,56,77,13};
    int length = sizeof(arr)/sizeof(arr[0]);
    int num = 13;
    int diff = 2;

    int result = findCount(arr,length,num,diff);
    if(result != -1){
        cout << "Count of numbers within the difference: " << result << endl;
    }
    else{
        cout << "No numbers found within the difference." << endl;
    }
    return 0;
}