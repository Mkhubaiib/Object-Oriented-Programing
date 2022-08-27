#include<iostream>
#include<CTYPE.H>
using namespace std;

int main(){
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (islower(letter) == 0){
        cout << "Letter is in Upper Case";}
    else{
        cout << "Letter is in Lower Case";
    }
    
    return 0;
}