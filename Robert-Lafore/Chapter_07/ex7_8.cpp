#include <iostream>
using namespace std;

class safearay{
	private:
		static const int LIMIT = 100;
		int a[LIMIT];
	public:
		void putel(int index, int value)
		{
		if(index>=0 && index <= LIMIT - 1)
			a[index] = value;
		else
			cout << "The index is outOfBounds!\n";
		}

		int getel(int index)
		{
			int temp;
		if(index>=0 && index <= LIMIT - 1){
		temp = a[index];
		cout << "Item No." << index << " is equal to " << temp << endl;
		}
		else
			cout << "The index is outOfBounds!\n";

		return temp;
		}
};

int main(){
	safearay m;
	char ch;
	do{
		cout << "Enter \"p\" to enter an array element and \"c\" for conclusion: ";
		char sym;
		cin >> sym;
		switch(sym){
			case 'p':
				int i, v;
				cout << "Enter index and value: ";
				cin >> i >> v;
				m.putel(i, v);
				break;
			case 'c':
				int j, temp;
				cout << "Enter an array index: ";
				cin >> j;
				temp = m.getel(j);
				break;
			default:
				cout << "Input Error!\n";
		}
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}




