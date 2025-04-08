#include<iostream>
#include<cstring>
using namespace std;

char* MoveHyphen(char str[], int n){
    if(str == nullptr || n <= 0){
        return nullptr;
    }
    string HypenPart = "";
    string NonHypenPart = "";   
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '-')
        {
            HypenPart += str[i];
        }else
        {
            NonHypenPart += str[i];
        }
    }

    string result = HypenPart + NonHypenPart;
    strcpy(str, result.c_str());
    return str;
}
int main() {
    char str[] = "Move-Hyphens-to-Front";
    cout << MoveHyphen(str, strlen(str)) << endl;
    return 0;
}