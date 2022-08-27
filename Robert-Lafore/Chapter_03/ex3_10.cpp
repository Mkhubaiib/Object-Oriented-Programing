#include<iostream>
using namespace std;
int main()
{
    int years = 0;
    double intrestRate;
    float amount,finalAmount,temp;
    
    cout << "Enter principal amount: ";
    cin >> amount;
    cout << "Enter final amount: ";
    cin >> finalAmount;

    cout << "Enter intrest rate (percent per year): ";
    cin >> intrestRate;

    temp = amount;
    while(temp<=finalAmount)
    {
        temp = amount + amount * (intrestRate/100);
        amount = temp;
        years++;
    }

    cout << "The number of years required: " << years;

    return 0;
}
