#include<iostream>
using namespace std;
long factorial(int);
int main()
{
    int number;
    do
    {
    cout << "Enter a number: ";
    cin >> number;
    cout << "The factorial is " << factorial(number)<<endl;
    }
    while (number!=0);
    
    
    return 0;
}
long factorial(int number)
{
    long factNumber = 1;
    for(int i =1; i<=number; i++)
    {
        factNumber*=i;
    }
    return factNumber;
}