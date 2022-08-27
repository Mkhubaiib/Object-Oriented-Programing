#include <iostream>

using namespace std;

class matrix
{
	private:
		static const int LIMIT = 10;
		int a[LIMIT][LIMIT];
	public:
		void putel(int index1, int index2, int value)
		{
			if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
				a[index1][index2] = value;
			else
				cout << "The index is outOfBounds!\n";
		}
		int getel(int index1, int index2) 
		{
			int temp;
			if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
			{
				temp = a[index1][index2];
				cout << "[" << index1 << ", " << index2 << "] = " << temp << endl;
			}
			else
				cout << "The index is outOfBounds!\n";
			return temp;
		}

};

int main()
{
	matrix m;
	char ch;
	do
	{
		cout << "Enter \"p\" to enter an array element and \"c\" for conclusion: ";
		char sym;
		cin >> sym;
		switch(sym)
		{
			case 'p':
				int a, b, v;
				cout << "Enter index and value: ";
				cin >> a >> b >> v;
				m.putel(a, b, v);
				break;
			case 'c':
				int j1, j2, temp;
				cout << "Enter an array index: ";
				cin >> j1 >> j2;
				temp = m.getel(j1, j2);
				break;
			default:
				cout << "InValid Input!\n";
		}
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}


