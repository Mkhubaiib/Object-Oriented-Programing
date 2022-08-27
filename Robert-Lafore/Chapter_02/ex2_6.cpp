#include<iostream>
using namespace std;


int main(){
    float pound = 1.487;
    float franc = 0.172;
    float deutschemark = 0.584;
    float yen = 0.00955;
    float dollars;

    cout << "Enter amount in Dollor: $";
    cin >> dollars;
    cout << "\n$" << dollars << " Equivalent to\n\n"
    << "Pound: "           << dollars/pound 
    << "\nFranc: "         << dollars/franc
    << "\nDeutschemark: "  <<dollars/deutschemark 
    << "\nYen: "           << dollars/yen 
    << endl;

    return 0;
}