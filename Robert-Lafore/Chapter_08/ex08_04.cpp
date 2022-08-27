#include<iostream>
#include<process.h>
using namespace std;
class Int{
    private:
       long double i;
    public:
        Int(){ i = 0; }
        Int(long double i1){ i = i1; }
        void getint(){ cin >> i;  }
        void display(){ cout << i << endl;  }
        
        Int operator +(Int i1) {  return checkit(i + i1.i);  }
        Int operator -(Int i1) {  return checkit( i - i1.i );  }
        Int operator *(Int i1) {  return checkit( i * i1.i );  }
        Int operator /(Int i1) {  return checkit( i / i1.i );  }       

        Int checkit(long double answer)
        {
            if(answer > 9000000000000000000.0 || answer < -9000000000000000000.0)
            {cout << "\nOverflow Error\n"; exit(1);}
            return Int(int(answer));
        }
};

int main(){
    Int i1(15);
    Int i2(7);
    Int i3,i4,i5,i6;

    i3=i1+i2;
    i4=i1-i2;
    i5=i1*i2;
    i6=i1/i2;
    i3.display();
    i4.display();
    i5.display();
    i6.display();
    return 0;
}
