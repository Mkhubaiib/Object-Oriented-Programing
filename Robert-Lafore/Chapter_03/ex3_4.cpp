#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char condition;
    float a, b;
    char symbol;
    do
    {   cout << "Enter first number, operator, second number: ";
        cin >> a >> symbol >> b;
        switch(symbol)
        {
            case '+':
                cout << "Answer = " << a+b;
                break;
            case '-':
                cout << "Answer = " << a-b;  
                break;
            case '*':
                cout << "Answer = " << a*b;
                break;
            case '/':
                cout << "Answer = " << a/b;
                break;
            default:
                cout << "You enter wrong symbol!";
        }
        cout << "\nDo another (y/n)? ";
        cin >> condition;
        condition = toupper(condition);
        if( (condition != 'N') && (condition != 'Y') ) {
            cout << "You Enter wrong choice!\n";  
            break; 
        }     
    }
    while (condition != 'N');    
    return 0;
}
