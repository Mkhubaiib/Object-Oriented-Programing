#include<iostream>
using namespace std;
class time{
    private:
        int hrs, mins, secs;
    public:
        time() : hrs(0), mins(0), secs(0){ }
        time(int h, int m, int s){ hrs = h;    mins = m;   secs = s; }
        void display() const{  cout << hrs << ":" << mins << ":" << secs << endl; }      

        time operator -(time t){
            int s = secs - t.secs;
            int m = mins - t.mins;
            int h = hrs - t.hrs;
            if( s < 0 ){  s += 60;  m--; }
            if( m < 0 ){  m += 60;  h--; }
            return(time(h,m,s));    }       

        time operator *(float n){
            int s = secs * n;
            int m = mins * n ;
            int h = hrs * n;
            if( s > 59 ){ s -= 60; m++; }
            if( m > 59 ){ m -= 60; h++; }
            return(time(h,m,s));   }
};

int main(){
    time t1(4, 10, 00);
    time t2(3, 20, 15);
    time t3,t4;
    t3=t1-t2;
   
    cout << "Diffrence of: " << endl; t1.display(); t2.display(); cout << "is: "; t3.display();
    float n;
    cout << "Enter number to multiplay with time: ";
    cin >> n;
    t4=t1*n;
    cout << "Multiplication of: "; t1.display(); cout << "with" << n <<" is "; t4.display();
    return 0;
}

