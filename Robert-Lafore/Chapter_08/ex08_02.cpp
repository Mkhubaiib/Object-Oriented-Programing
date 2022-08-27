#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class String
{
    private:
        enum { SZ = 80}; 
        char str[SZ];
    public:
        String()
        { strcpy(str, "");}
        String(char s[])
        {strcpy(str, s);}
        void display() const
        {cout << str;}

        String operator += (String ss) 
        {          
            if (strlen(str) + strlen(ss.str) >= SZ)
            {
                cout << "\nString overflow"; exit(1);
            }
            strcat(str, ss.str);
            return String(str);
        }
};
int main()
{
    String s1 = "\ncat   ";
    String s2 = "bird";
    String s3;
    s3 = s1+=s2;

    cout << "s1: ";s1.display();
    cout << "\ns2: ";s2.display();
    cout << "\ns3: ";s3.display();
  
    return 0;
}