#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    char ch;
    long number = 0;
	
	
    cout << "Enter a number: ";
    int count =1;
	ch=getche();

		
    while(ch!='\r'){ 
    
       number = (number*10)+(ch-'0');
       
       if (count!=6){
	   		ch=getche();
    		count ++;
	   }
	   else  break;
       
    }

    cout << "\nNumber is:  "<<number << endl;
    return 0;
}
