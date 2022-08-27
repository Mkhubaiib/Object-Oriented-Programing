 #include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string ldtoms(long double sum);

int main()
{
	long double sum;
	char ch;   
	do
	{
		cout << "Enter the amount of money: ";
		cin >> sum;
		string s = ldtoms(sum);
		cout << "Amount equal to " << s << endl;
		cout << "You want to Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

string ldtoms(long double sum)
{
	stringstream ss (stringstream::in | stringstream::out);
	ss.setf(ios::fixed);
	ss << setprecision(2) << sum;
	string s = ss.str();
	s.insert(0, "$");
	int p = s.find('.') - 1, n = 0;
	for(int i = p; i > 0; i--)
		if(++n % 3 == 0)
			s.insert(i, ",");
	return s;
}
