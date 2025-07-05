#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int findSecondLargest(const vector<int>& arr){
    int first = INT_MIN, second = INT_MIN;

    for(int num : arr){
        if(num > first){
            second = first;
            first = num;
        }else if(num > second && num < first){
            second = num;
        }
    }
    return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest found
}
int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int result = findSecondLargest(arr);

    if (result != -1)
        cout << "Second largest = " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}