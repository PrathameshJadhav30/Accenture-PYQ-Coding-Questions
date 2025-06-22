#include<iostream>
using namespace std;

int countDecrease(int arr[], int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            count++;
        }
    }
    return count;
}

int main(){
    int n = 6;
    int arr[] = {100, 90, 80, 70, 60, 50};

    cout << countDecrease(arr, n) << endl;
    return 0;
}