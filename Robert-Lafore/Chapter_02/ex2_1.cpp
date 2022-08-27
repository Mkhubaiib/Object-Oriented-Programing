#include<iostream>
using namespace std;

float gallonsToCubicFeet(float gallons); //function declaration
int main(){
    float gallons;    
    cout << "Enter quantity in gallons: ";
    cin >> gallons;
    cout << "Equivalent in cubic feet is "<<gallonsToCubicFeet(gallons);
    return 0;
}

float gallonsToCubicFeet(float gallons )    //function declarator
    {
    float cubicFeet;
    cubicFeet =  gallons/7.481;
    return cubicFeet;
    }