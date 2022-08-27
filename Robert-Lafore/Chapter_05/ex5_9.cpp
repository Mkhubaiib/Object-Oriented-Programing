#include <iostream>
using namespace std;

struct time{
    int hours, mins, secs;
};

void swap(time&, time&);

int main(){
    time time1, time2;
    char temp;
    cout << "Enter Time1 (HH:MM:SS): ";
    cin >> time1.hours >> temp >> time1.mins >> temp >> time1.secs;
    
    cout << "Enter Time1 (HH:MM:SS): ";
    cin >> time2.hours >> temp >> time2.mins >> temp >> time2.secs;

    swap(time1, time2);
    cout << "After swap:" << endl;
    cout << "Equivalent in HH:MM:SS format\nTime1: " << time1.hours << ":" << time1.mins << ":" << time1.secs 
            << "\nTime2: " << time2.hours << ":" << time2.mins << ":" << time2.secs << endl;
    return 0;
}

void swap(time& time1, time& time2){
    time1.hours = time1.hours+time2.hours;
    time2.hours = time1.hours-time2.hours;
    time1.hours = time1.hours-time2.hours;

    time1.mins = time1.mins+time2.mins;
    time2.mins = time1.mins-time2.mins;
    time1.mins = time1.mins-time2.mins;
    
    time1.secs = time1.secs+time2.secs;
    time2.secs = time1.secs-time2.secs;
    time1.secs = time1.secs-time2.secs;
}