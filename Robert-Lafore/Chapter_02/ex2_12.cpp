#include<iostream>

using namespace std;
void newToOld_Pounds(float decPounds);
int main(){ 
 
	float decPounds;
	cout << "Enter Decimal pounds: ";
	cin >> decPounds;
	newToOld_Pounds(decPounds);
	return 0;
}

void newToOld_Pounds(float decPounds)
{
	int pounds = static_cast<int>(decPounds);
	float decfrac = decPounds - pounds;

	float decShillings =  decfrac * 20;
	int shillings = static_cast<int>(decShillings);
	float fracShillings = decShillings - shillings;

	int pence = static_cast<int>(fracShillings * 12);
	cout << "Equivalent in old notation: " << '\x9c' << pounds << "." << shillings << "." << pence;

	cout << endl;
}