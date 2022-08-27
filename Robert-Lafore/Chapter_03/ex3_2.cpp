#include<iostream>
using namespace std;

float celsiusToFahrenheit(float);
float fahrenheitToCelsius(float);

int main(){
    int choice;
    cout << "Type 1 to convert Fahrenheit to Celsius,\n     2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    switch(choice){
        case 1:
            float fahrenheit;
            cout<<"Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            cout << "In Celsius that`s "<<fahrenheitToCelsius(fahrenheit);
    
            break;
        case 2:
            float celsius;
            cout<<"Enter temperature in Celsius: ";
            cin >> celsius;
            cout << "In Fahrenheit that`s "<<celsiusToFahrenheit(celsius);
    
            break;
        default:
            cout << "You enter wrong choice! ";
    }
    return 0;
}

float celsiusToFahrenheit(float celsius){
    return (9/5*celsius)+32;
}
float fahrenheitToCelsius(float fahrenheit){
    return (5*(fahrenheit-32))/9;
}
