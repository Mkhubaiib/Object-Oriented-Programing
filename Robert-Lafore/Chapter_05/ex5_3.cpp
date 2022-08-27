#include<iostream>
using namespace std;

void zeroSmaller(int&, int&);
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    zeroSmaller(a,b);
    cout << "The value of a is " << a << " and the value of b is "<< b;
    return 0;
}
void zeroSmaller(int& a, int& b)
{
    if (a<b)
    {
        a=0;
    }
    else b=0;
}