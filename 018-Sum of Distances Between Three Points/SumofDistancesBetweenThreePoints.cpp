#include<iostream>
#include<cmath>

using namespace std;

double CalculateDistance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}
int main(){
    int x1 = 1, y1 = 2;
    int x2 = 4, y2 = 7;
    int x3 = 3, y3 = 6;

    double dist1 = CalculateDistance(x1, y1, x2, y2);
    double dist2 = CalculateDistance(x2, y2, x3, y3);
    double dist3 = CalculateDistance(x3, y3, x1, y1);

    double totalDistance = dist1 + dist2 + dist3;

    cout<<"Total Distance is: "<<totalDistance<<endl;

    return 0;
}