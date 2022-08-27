#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
        string name;
        long number;
    public:
        void getdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter number: ";
            cin >> number;
        }
        void putdata() const{
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
            cout << endl;
        }
};
int main(){
    employee employeeArray[100];
    int n = 0;
    char ch;
    do{
        cout << "Enter data for employee " << n+1 << endl;
        employeeArray[n++].getdata();
        cout << "Enter another employee details (y/n)?: ";
        cin >> ch;
        if(n>=100) 
        {
            cout << "\nThe array is full!";
            break;
        }
    }while(ch != 'n');
    for(int i = 0; i < n; i++){
        cout << "Employee " << i + 1 << " details";
        employeeArray[i].putdata();
    }
    cout << endl;
    return 0;
}
