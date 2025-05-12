#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findElevationPoint(vector<int>& arr)
{
    int N = arr.size();
    int maxLeft = INT_MIN;

    for(int i = 0; i < N; i++){
        maxLeft = max(maxLeft, arr[i]);
        bool isElevation = true;
        
        for(int j = i+1; j < N; j++){
            if(arr[j] > arr[i]){
                isElevation = false;
                break;
            }
        }

        if(maxLeft <= arr[i] && isElevation)
        {
        return arr[i];
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr1 = {1,2,3,4,5,3,2,1};
    vector<int> arr2 = {5, 3};

    cout<<findElevationPoint(arr1) << endl;
    cout<<findElevationPoint(arr2) << endl;

    return 0;
}