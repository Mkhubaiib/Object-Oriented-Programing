#include<iostream>
using namespace std;
#include <cctype>
int main()
{

  char ch;
	do{
		char temp;
		int pounds1, shillings1, pence1, pounds2, shillings2, pence2;
		cout << "Enter first amount: \x9c";
		cin >> pounds1 >> temp >> shillings1 >> temp >> pence1;
		cout << "Enter second amount: \x9c";
		cin >> pounds2 >> temp >> shillings2 >> temp >> pence2;
		pounds1 += pounds2;
		shillings1 += shillings2;
		pence1 += pence2;
        
		if(pence1 > 11){
			shillings1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shillings1 > 19){
			pounds1 += (shillings1/20);
			shillings1 = shillings1%20;
		}
		cout << "Total is \x9c" << pounds1 << "." << shillings1 << "." << pence1 << endl; 
		cout << "Do you want to continue (y/n): ";
		cin >> ch;
		
	}while(ch == 'y');
	cout << endl;
    return 0;
}
