#include <iostream>
using namespace std;
double power(double, int=2);
char power(char, int=2);
int power(int, int=2);
long power(long, int=2);
float power(float, int=2);
int main(){
    int p;
    double num1;
	char num2;
	int num3;
	long num4;
	float num5;
	cout << "Enter a double value: ";
	cin  >> num1;
    cout << "Enter power: ";
    cin >> p;
	cout << "The " << num1 << " raised to the " << p << " is " << power(num1,p) << endl;	
	cout << "\nEnter a char value: ";
	cin  >> num2;
    cout << "Enter power: ";
    cin >> p;
	cout << "The " << num2 << " raised to the " << p << " is " << power(num2,p) << endl;
	cout << "\nEnter a int value: ";
	cin  >> num3;
    cout << "Enter power: ";
    cin >> p;
	cout << "The " << num3 << " raised to the " << p << " is "  << power(num3,p) << endl;
	cout << "\nEnter a long value: ";
	cin >> num4;
    cout << "Enter power: ";
    cin >> p;
	cout << "The " << num4 << " raised to the " << p << " is " << power(num4,p) << endl;
	cout << "\nEnter a float value: ";
	cin  >> num5;
    cout << "Enter power: ";
    cin >> p;
	cout << "The " << num5 << " raised to the " << p << " is "  << power(num5,p) << endl;

    return 0;
}

double power(double dd, int p) {
	double power = 1;
	for(int i=1; i<=p; i++)
		power *= dd;
	return power;
}


char power(char ch, int p) {
	char power = 1;
	for(int i=1; i<=p; i++)
		power *= ch;
	return power;
}


int power(int nint, int p) {
	int power = 1;
	for(int i=1; i<=p; i++) 
		power *= nint;
	return power;
}


long power(long numb, int p) {
	long power = 1;
	for (int i=1; i<=p; i++)
		power *= numb;
	return power;
}


float power(float number, int p) {
	float power = 1.0;
	for (int i=1; i<=p; i++)
		power *= number;
	return power;
}
