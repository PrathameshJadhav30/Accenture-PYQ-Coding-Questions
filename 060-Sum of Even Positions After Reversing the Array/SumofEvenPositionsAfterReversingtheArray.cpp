#include <iostream>
#include <vector>
using namespace std;

int sumEvenIndexAfterReverse(vector<int>& arr) {
    int n = arr.size();
    int sum = 0;

    // Traverse from the end (reversed)
    for (int i = n - 1, idx = 0; i >= 0; i--, idx++) {
        if (idx % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int result = sumEvenIndexAfterReverse(arr);
    cout << "Sum of even index after reverse: " << result << endl;
    return 0;
}