#include<iostream>
using namespace std;
float oldToNew_Pounds(float pounds, float shillings, float pence);
int main(){ 
    float pounds, shillings, pence;
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout << "Enter pence: ";
	cin >> pence;
	
	cout << "Decimal Pounds: " <<'\x9c'<< oldToNew_Pounds(pounds,shillings,pence);
	return 0;
} 

float oldToNew_Pounds(float pounds, float shillings, float pence){
	float totalPence =  (pence / (12 * 20)) + shillings / 20;
	float totalPounds = pounds + totalPence;
    return totalPounds;
}