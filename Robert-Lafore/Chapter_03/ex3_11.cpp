#include<iostream>
#include <cctype>
using namespace std;
int main()
{   char condition;	
	do{
		char temp;
		char symbol;
		int pounds1, shillings1, pence1, pounds2, shillings2, pence2;
		cout << "Enter first amount: \x9c";
		cin >> pounds1 >> temp >> shillings1 >> temp >> pence1;
		cout << "Enter second amount: \x9c";
		cin >> pounds2 >> temp >> shillings2 >> temp >> pence2;	
		cout << "Enter operation +, -, *: ";
		cin >> symbol;	
		switch(symbol){
			case '+':
				pounds1 += pounds2;
				shillings1 += shillings2;
				pence1 += pence2;
				break;
			case '-':
				pounds1 -= pounds2;
				shillings1 -= shillings2;
				pence1 -= pence2;
				break;
			case '*':
				pounds1 *= pounds2;
				shillings1 *= shillings2;
				pence1 *= pence2;
				break;	
			default:
				cout << "Invalid option" << endl;
				break;			
		}
		if(pence1 > 11){
			shillings1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shillings1 > 19){
			pounds1 += (shillings1/20);
			shillings1 = shillings1%20;
		}
		cout << "Amount after performing " << symbol << " is \x9c" << pounds1 << "." << shillings1 << "." << pence1 << endl; 
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
