#include<iostream>
#include<vector>
#include<utility> // for std::pair
using namespace std;

pair<int, int> MaxElementAndIndex(const vector<int>& arr) {
    if (arr.empty()) {
        return make_pair(-1, -1); // Return -1 for both if the array is empty
    }

    int maxVal = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    return make_pair(maxVal, maxIndex);
}
int main() {
    vector<int> arr = {1, 8, 4, 9, 6};
    pair<int, int> result = MaxElementAndIndex(arr);
    
    cout << "Maximum Element: " << result.first << endl;
    cout << "Index: " << result.second << endl;
    
    return 0;
}