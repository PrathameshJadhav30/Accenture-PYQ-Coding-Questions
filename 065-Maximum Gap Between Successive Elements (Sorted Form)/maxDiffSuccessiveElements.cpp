#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumGap(vector<int>& nums){
    if(nums.size() < 2){
        return 0;
    }

    sort(nums.begin(), nums.end());
    int maxDiff = 0;

    for(int i = 1; i < nums.size(); i++){
        maxDiff = max(maxDiff, nums[i] - nums[i - 1]);
    }
    return maxDiff;
}
int main() {
    vector<int> arr = {3, 6, 9, 1};
    cout << "Maximum Gap: " << maximumGap(arr) << endl;
    return 0;
}