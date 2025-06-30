#include <iostream>
#include <utility>  // for std::swap
using namespace std;

void ReverseString(char str[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        swap(str[left], str[right]); // using built-in swap
        left++;
        right--;
    }
}

int main() {
    char str[] = "apples";
    int n = sizeof(str) - 1; // excluding null character

    ReverseString(str, n);
    cout << "Reversed String: " << str << endl;

    return 0;
}