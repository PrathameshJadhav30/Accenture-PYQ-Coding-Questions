#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ProductSmallestPair(int sum, vector<int>& arr) {
    if (arr.size() < 2) {
        return -1;
    }

    sort(arr.begin(), arr.end());

    int a = arr[0];
    int b = arr[1];

    if (a + b <= sum) {
        return a * b;
    }

    return 0;
}

int main() {
    vector<int> arr1 = {3, 2, 1, 7, 5, 4};
    int sum1 = 8;
    cout << "Output: " << ProductSmallestPair(sum1, arr1) << endl;  // Output: 2 (1*2)

    vector<int> arr2 = {1, 8, 0, 2, 3, 5, 6};
    int sum2 = 12;
    cout << "Output: " << ProductSmallestPair(sum2, arr2) << endl;  // Output: 0*1 = 0

    vector<int> arr3 = {10, 20, 30};
    int sum3 = 50;
    cout << "Output: " << ProductSmallestPair(sum3, arr3) << endl;  // Output: 200 (10*20)

    vector<int> arr4 = {};
    int sum4 = 5;
    cout << "Output: " << ProductSmallestPair(sum4, arr4) << endl;  // Output: -1

    return 0;
}
