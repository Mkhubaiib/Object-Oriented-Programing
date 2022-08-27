#include<iostream>
using namespace std;
void sumOfFractions(int a, int b, int c, int d);
int main(){
    int a, b, c, d;
	char dummytemp;
	cout << "Enter first fraction: ";
	cin >> a >> dummytemp >> b;
	cout << "Enter second fraction: ";
	cin >> c >> dummytemp >> d;
	sumOfFractions(a,b,c,d);
	return 0;
}
void sumOfFractions(int a, int b, int c, int d){
    
	int numenator = a * d + b * c;
	int denumenator = b * d;
	cout << "Sum = " << numenator << "/" << denumenator << endl;
}