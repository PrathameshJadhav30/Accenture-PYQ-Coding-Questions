#include<iostream>
using namespace std;

int rearrangeBits(int n){
    int count = 0;

    while (n > 0) {
        if (n & 1) { // Check if the last bit is set
            count++;
        }
        n >>= 1; // Right shift to process the next bit
    }

    int result = (1 << count) - 1; // Create a number with 'count' bits set to 1
    return result;
}

int main() {
    int n = 10;
    cout << rearrangeBits(n) << endl; // Output: 3

    n = 2;
    cout << rearrangeBits(n) << endl; // Output: 1

    return 0;
}