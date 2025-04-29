#include<iostream>
#include<cmath>
using namespace std;

int findCount(int arr[], int length, int num, int diff){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(abs(arr[i] - num) <= diff){
            count++;
        }
    }

    if(count == 0){
        return -1;
    }else{
        return count;
    }
}
int main(){
    int arr[] = {12,3,14,56,77,13};
    int length = sizeof(arr)/ sizeof(arr[0]);
    int num = 13;
    int diff = 2;

    cout<<findCount(arr,length,num,diff)<<endl;

    return 0;
}