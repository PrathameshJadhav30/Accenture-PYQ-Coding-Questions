#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int findMinDiff(vector<int>& arr, int m){
    if(arr.size() < m){
        return -1;
    }

    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;

    for(int i = 0; i + m - 1 < arr.size(); i++){
        int diff = arr[i + m - 1] - arr[i];
        min_diff = min(min_diff, diff);
    }

    return min_diff;
}

int main(){
    vector<int> arr = { 7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout<<" Minimum Difference is "<<findMinDiff(arr,m)<< endl;
    return 0;
}