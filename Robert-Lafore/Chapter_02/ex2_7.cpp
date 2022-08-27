#include<iostream>
using namespace std;
float celsiusToFahrenheit(float celcius);
int main(){
    float celcius, fahrenheit;
	cout << "Enter temperatur in Celcius: ";
	cin >> celcius;
    fahrenheit = celsiusToFahrenheit(celcius);
	cout << celcius << "C is equivalent to " << fahrenheit << "F" << endl;
    return 0;
}
float celsiusToFahrenheit(float celcius){
    float fahrenheit;
    fahrenheit = (celcius * 9 / 5) + 32;
	
    return fahrenheit;
}
