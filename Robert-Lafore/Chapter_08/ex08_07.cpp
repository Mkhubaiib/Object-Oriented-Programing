#include<iostream>

using namespace std;

class Fraction{
    int num, den;
    public:
        Fraction():num(0), den(0)
			{	}
		void getFraction();		
		void arithOperation(Fraction, Fraction, char);
		void dispFraction() const;
		void lowTerms();
};

void Fraction::getFraction() {
	char temp;
	cout << "\nEnter a fraction in a/b form: ";
	cin >> num >> temp >> den;
}


void Fraction::arithOperation(Fraction frac1, Fraction frac2, char operatr) {
	
	switch(operatr) {
		case '+':
			cout << "\nAddition of two fraction is: ";
			num = (frac1.num * frac2.den) + (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '-':	
			cout <<"\nSubtraction of two fraction is: ";
			num = (frac1.num * frac2.den) - (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '*':	
			cout <<"\nMultiplication of two fraction is: ";
			num = frac1.num * frac2.num;
			den = frac1.den * frac2.den;
		break;

		case '/':	
			cout <<"\nDivision of two fraction is: ";
			num = frac1.num * frac2.den;
			den = frac1.den * frac2.num;
		break;

	}
}

void Fraction::dispFraction() const{	
	cout << num << "/" << den;
}

void Fraction::lowTerms() {	
	long tnum, tden, temp, gcd;

	tnum = labs(num);	
	tden = labs(den);	

	if(tden == 0) {	
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		
		num = 0; 
		den = 1;
		return;
	}
	
	while(tnum != 0) {
		if(tnum <tden) {	
			temp = tnum;	
			tnum = tden;
			tden = temp;	
		}
		tnum = tnum - tden;		
	}
	gcd = tden;		
	num = num/gcd;		
	den = den/gcd;		
	cout <<num <<"/" <<den;
	cout <<endl;
}
int main(){
	Fraction fraction1, fraction2, fraction3;	
	char oprt;
	cout <<"\nEnter first fraction: ";
	fraction1.getFraction();
	cout <<"\nEnter second fraction: ";
	fraction2.getFraction();
	cout <<"\nEnter an operator for arithmatic operation: ";
	cin >>oprt;
	fraction3.arithOperation(fraction1, fraction2, oprt);
	fraction3.dispFraction();
	cout <<"\nLoswest terms of fraction is: ";
	fraction3.lowTerms();
	
	return 0;
}