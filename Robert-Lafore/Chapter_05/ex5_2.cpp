#include<iostream>
using namespace std;

double power(double, int);

int main()
{
    double n;
    int p;
    char cond;

    cout << "Entre number: ";
    cin >> n;
    cout << "Do you want to enter power other than 2 (y/n): ";
    cin >> cond;

    if (cond == 'y' | cond == 'Y')
    {
        cout << "Enter power: ";
        cin >> p;
    }
    else p=2;

    cout << "The " << n << " raised to the " << p << " is " << power(n,p);

    return 0;
}
double power(double n , int p = 2)
{
    double ans = 1;
    for(int i = 1; i<= p; i++)
    {
        ans *= n;
    }
    return ans;
}