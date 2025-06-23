#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> maxProductPairWithSumTarget(const vector<int>& arr, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int num : arr) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            if (result.empty() || (num * complement > result[0] * result[1])) {
                result = {num, complement};
            }
        }
        numMap[num] = 1; // Store the number in the map
    }

    return result;
}
int main(){
    vector<int> arr = {1, 4, 5, 3, 2};
    int target = 6;
    vector<int> result = maxProductPairWithSumTarget(arr, target);

    if (!result.empty()) {
        cout << "Max product pair with sum " << target << ": (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}