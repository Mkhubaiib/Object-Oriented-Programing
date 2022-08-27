#include<iostream>
#include <cctype>
using namespace std;
int main()
{char condition;
	do{
		int a, b, c, d, num, den;
		char temp, symbol;
		cout << "Enter first fraction: ";
		cin >> a >> temp >> b;
		cout << "Operator: ";
		cin >> symbol;
		cout << "Enter second fraction: ";
		cin >> c >> temp >> d;

		switch(symbol){
			case '+':
				num = a * d + b * c;
				den = b * d;
				cout << "Sum is: " << num << "/" << den << endl;
				break;
			case '-':
				num = a * d - b * c;
				den = b * d;
				cout << "Subtraction is: " << num << "/" << den << endl;
				break;
			case '*':
				num = a * c;
				den = b * d;
				cout << "Multiplication is: " << num << "/" << den << endl;
				break;
			case '/':
				num = a * d;
				den = b * c;
				cout << "Division is: " << num << "/" << den << endl;
				break;
			default:
				cout << "Invalid option";
				break;
		}
		cout << "Do you want to continue (y/n): ";
		cin >> condition;
        condition = toupper(condition);
       
        if( (condition != 'N') && (condition != 'Y') ) {
            cout << "You Enter wrong choice!\n";  
            break; 
        }
	}while(condition == 'Y');
    return 0;
}
