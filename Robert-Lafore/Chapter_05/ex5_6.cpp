#include<iostream>
using namespace std;

struct time {
	int hours, minutes, seconds;
};

long time_to_secs(time);
time secs_to_time(long);

int main()
{
    time time1,time2,timesum; 
    char temp;
    cout << "Enter Time 1(HH:MM:SS): ";
    cin >> time1.hours >> temp >> time1.minutes >> temp >> time1.seconds;
    cout << "Enter Time 2(HH:MM:SS): ";
    cin >> time2.hours >> temp >> time2.minutes >> temp >> time2.seconds;

    long sum = time_to_secs(time1) + time_to_secs(time2);
    timesum = secs_to_time(sum);
    cout << "\nThe totall sum is " << timesum.hours << ":" << timesum.minutes << ":" << timesum.seconds;
    return 0;
}
long time_to_secs(time time)
{
    return time.hours*3600 + time.minutes*60 + time.seconds;
}
time secs_to_time(long seconds)
{
    time timeSum;
    int min,sec;
    timeSum.hours = seconds/3600;
    sec=seconds%3600;
    timeSum.minutes = sec/60;
    timeSum.seconds = sec%60;
    return timeSum;
}
