#include<iostream>
using namespace std;

double largerDistance(double, double);
int main()
{
    double d1,d2;
    cout << "Enter distance1: ";
    cin >> d1;
    cout << "Enter distance2: ";
    cin  >> d2;
    cout << "The largest distance is " << largerDistance(d1,d2);
    return 0;
}
double largerDistance(double d1,double d2)
{
    if(d1>d2) return d1;
    else return d2;
}