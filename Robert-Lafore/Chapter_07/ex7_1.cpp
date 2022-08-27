#include<iostream>
#include<cstring>
using namespace std;
void reversit(char []);
int main()
{
    const int MAX = 80;
    char c_String [MAX];
    cout << "Enter a string: ";
    cin.get(c_String, MAX);
    reversit(c_String);
    cout << "Reversed string: " << c_String << endl;
    return 0;
}
void reversit(char c_String[])
{
    int len = strlen(c_String);
    for(int i=0; i<len/2; i++)
    {
        char temp = c_String[i];
        c_String[i] = c_String[len-i-1];
        c_String[len-i-1] = temp; 
    }
}