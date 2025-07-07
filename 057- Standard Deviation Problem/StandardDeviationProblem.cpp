#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    vector<double> nums = {10,20,30,40,50};
    int n = nums.size();

    //Calculate mean
    double sum = 0;
    for(double num : nums){
        sum += num;
    }
    double mean = sum / n;

    //Calculate variance
    double variance = 0;
    for(double num : nums){
        variance += pow(num - mean, 2);
    }
    variance /= n;

    //Standared deviation
    double stdDeviation = sqrt(variance);

    cout << "Standard Deviation: " << stdDeviation << endl;
    return 0;
}