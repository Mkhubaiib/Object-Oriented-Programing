#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int lines = 20;
    int spaces = lines-1;
    int noOfX =1;
    for(int m=1; m<=lines; m++){


        for(int j=1; j<=spaces; j++){cout << " ";}
        for(int i=1; i<=noOfX; i++){cout  << "X";}

        spaces--;
        noOfX+=2;
        cout << endl;
    }
    return 0;
}