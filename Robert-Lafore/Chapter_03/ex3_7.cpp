#include<iostream>
using namespace std;
int main()
{
    int years;
    double intrestRate;
    float amount,compound;

    cout << "Enter initial amount: ";
    cin >> amount;
    cout << "Enter number of years: ";
    cin >> years;
    cout << "Enter intrest rate (percent per year): ";
    cin >> intrestRate;
    for (int i = 1; i<=years; i++)
    {
        compound = amount + amount * (intrestRate/100);
        amount = compound;

    }
    cout << "At th end of " << years << "yeras, you will have " << compound << " dollors.";
    return 0;
} 
