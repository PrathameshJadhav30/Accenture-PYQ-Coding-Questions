#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int LargeSmallSum(vector<int>& arr){
    if(arr.size() <= 3){
        return 0;
    }

    vector<int> EvenPos,OddPos;
    for(size_t i = 0; i < arr.size(); i++ ){
        if(i % 2 == 0){
            EvenPos.push_back(arr[i]);
        }
        else{
            OddPos.push_back(arr[i]);
        }
    }
    if(EvenPos.size() < 2 || OddPos.size() < 2){
        return 0;
    }

    sort(EvenPos.begin(), EvenPos.end());
    sort(OddPos.begin(), OddPos.end());

    int SecondLargestElement = EvenPos[EvenPos.size() - 2];
    int SecondSmallestOdd = OddPos[1];

    return SecondLargestElement + SecondSmallestOdd;
}
int main(){
    vector<int> arr1 = {3, 2, 1, 7, 5, 4};
    cout << "Output: " << LargeSmallSum(arr1) << endl;  // Expected output: 7

    vector<int> arr2 = {1, 8, 0, 2, 3, 5, 6};
    cout << "Output: " << LargeSmallSum(arr2) << endl; // Expected Output: 8

    vector<int> arr3 = {10, 20, 30};
    cout << "Output: " << LargeSmallSum(arr3) << endl; // Expected Output: 0

    vector<int> arr4 = {};
    cout << "Output: " << LargeSmallSum(arr4) << endl; // Expected Output: 0

    return 0;
}