#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;

    vector<int> evenIndex, oddIndex;
    for(int i  = 0; i < n ; i++){
        int val;
        cout<<"Enter Element at index "<<i<<"index: ";
        cin>>val;

        if(i % 2 == 0){
            evenIndex.push_back(val);
        }else{
            oddIndex.push_back(val);
        }
    }
    sort(evenIndex.begin(), evenIndex.end());
    sort(oddIndex.begin(), oddIndex.end());

    cout<<"Even Index Array: ";
    for(int i = 0; i< evenIndex.size(); i++){
        cout<<evenIndex[i]<<" ";
    }
    cout<<endl;

    cout<<"Odd Index Array: ";
    for(int i = 0; i < oddIndex.size();i++){
        cout<<oddIndex[i]<<" ";
    }
    cout<<endl;

    int secondLargestEven;
    if(evenIndex.size() >= 2){
        secondLargestEven = evenIndex[evenIndex.size() - 2];
    }else{
        secondLargestEven = 0;
    }

    int secondLargestOdd;
    if(oddIndex.size() >= 2){
        secondLargestOdd = oddIndex[oddIndex.size() - 2];
    }else{
        secondLargestOdd = 0;
    }
   
    cout<<"Second Largest Element in Even Index Array: "<<secondLargestEven<<endl;
    cout<<"Second Largest Element in Odd Index Array: "<<secondLargestOdd<<endl;    
    cout<<"Sum of Second Largest Element: "<<secondLargestEven + secondLargestOdd<<endl;
    return 0;

}

