#include<iostream>
#include<cmath>

using namespace std;
float circarea(float);

int main()
{
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;

    cout << "The radius is " << circarea(radius);
    return 0;
}
float circarea(float radius)
{
    return M_PI*pow(radius,2);
}