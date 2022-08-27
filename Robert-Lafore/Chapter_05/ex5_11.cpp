#include <iostream>
using namespace std;

struct sterling{
    int pound, shilling, pence; 
};

sterling BritishCurrency(int, int, int);
sterling sterlingfunc(sterling, sterling);
void sterlingDisp(sterling);

int main() {
	int pound, shilling, pence;
	char temp;
	sterling firstValue, secondValue, sumValue;
	cout << "Enter Amount1(\x9c 9:19:11): ";
	cin >> pound >> temp >> shilling >> temp >> pence;;
	firstValue = BritishCurrency(pound, shilling, pence);
	cout << "Enter Amount2(\x9c 9:19:11): ";
	cin >> pound >> temp >> shilling >> temp >> pence;;
	secondValue = BritishCurrency(pound, shilling, pence);

	sumValue = sterlingfunc(firstValue, secondValue);
	cout <<"\nFirst value is: "; sterlingDisp(firstValue);
	cout <<"\nSecond value is: "; sterlingDisp(secondValue);
	cout <<"\nSum of above values is: "; sterlingDisp(sumValue);
	cout <<endl;
	return 0;
}

sterling  BritishCurrency(int pnd, int shl, int pen) {
	sterling currency;
	currency.pound = pnd;
	currency.shilling = shl;
	currency.pence = pen;
	return currency;
}

sterling sterlingfunc(sterling ss1, sterling ss2) {
	sterling result;
	result.pound = ss1.pound + ss2.pound;
	result.shilling = ss1.shilling + ss2.shilling;
	result.pence = ss1.pence + ss2.pence;
	
	if(result.pence > 11) {
		result.shilling += result.pence/12;
		result.pence = result.pence%12;
	}

	if(result.shilling > 19) {
		result.pound += result.shilling/20;
		result.shilling = result.shilling%20;
	}
	return result;
}

void sterlingDisp(sterling valueDisp) {
	cout << "\x9c" << valueDisp.pound << ":" << valueDisp.shilling << ":" << valueDisp.pence;
}