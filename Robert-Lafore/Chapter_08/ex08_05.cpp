#include<iostream>
using namespace std;
class time{
    private:
        int hrs, mins, secs;
    public:
        time() : hrs(0), mins(0), secs(0){ }
        time(int h, int m, int s){
            hrs = h;
            mins = m;
            secs = s;
        }
        void display(){
            if( secs > 59 ){  secs -= 60;  mins++; }
            if( mins > 59 ){  mins -= 60;  hrs++;  }
            if( secs < 0 ){   secs += 60;  mins--; }
            if( mins < 0 ){   mins += 60;  hrs--;  }

            cout << hrs << ":" << mins << ":" << secs << endl;
        }
        
        time operator ++()    {  return(time(hrs,mins,++secs));  }

        time operator --()    {  return(time(hrs,mins,--secs));  }

        time operator ++(int) {  return(time(hrs,mins,secs++));  }

        time operator --(int) {  return(time(hrs,mins,secs--));  }
};

int main(){

    time t1(24, 23, 21);
    time t2;

    t2=t1++;
    t2.display();
    t1.display();
    return 0;
}

