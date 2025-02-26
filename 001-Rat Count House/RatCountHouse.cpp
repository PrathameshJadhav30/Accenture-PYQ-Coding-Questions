#include <iostream>

using namespace std;

int minHouses(int r, int unit, int arr[], int n) {
    if (n == 0) 
        return -1;  // Return -1 if array is empty

    int requiredFood = r * unit;
    int currentFood = 0;

    for (int i = 0; i < n; i++) {
        currentFood += arr[i];
        if (currentFood >= requiredFood){
            return i + 1; // Houses are 1-based index
        }
            
    }

    return 0; // If food is insufficient
}

int main() {
    int r = 7, unit = 2;
    int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << minHouses(r, unit, arr, n) << endl;
    return 0;
}
