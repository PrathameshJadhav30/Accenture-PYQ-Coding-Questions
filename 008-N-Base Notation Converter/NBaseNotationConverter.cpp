#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string DectoNBase(int n, int num){
    string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result = "";

    if(n < 2 || n > 36){
        return "Error: Base must be between 2 and 36.";
    }

    if(num == 0){
        return "0";
    }

    while(num > 0){
        int remainder = num % n;
        result += symbols[remainder];
        num /= n;
    }

    reverse(result.begin(), result.end());
    return result;
}
int main(){
    int n, num;
    cout << "Enter the base (2-36): ";
    cin >> n;
    cout << "Enter the number: ";
    cin >> num;

    string result = DectoNBase(n, num);
    cout << "The number in base " << n << " is: " << result << endl;

    return 0;
}