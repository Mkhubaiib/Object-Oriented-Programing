#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;
    public:  
        Distance(): feet(0), inches(0.0){}
        Distance(int f, float in): feet(f), inches(in){}
        void getdist()
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "\nEnter inches: "; cin >> inches;
            cout << endl;
        }
        void showdist() const
        {
            cout << feet << "\'-" << inches << '\"';
        }
    Distance operator -(Distance);
};
Distance Distance::operator - (Distance d2)
{
    int f = feet-d2.feet;
    float i = inches-d2.inches;
    if(i < 12) 
    {   i+=12.0;    f--; }
    return Distance(f,i);
}

int main()
{
    Distance dist1, dist3;
    dist1.getdist();
    Distance dist2(11, 6.25);
    dist3 = dist1 - dist2;
    cout << "dist1 = "; dist1.showdist(); cout << endl;
    cout << "dist2 = "; dist2.showdist(); cout << endl;
    cout << "dist3 = "; dist3.showdist(); cout << endl;
    return 0;
}