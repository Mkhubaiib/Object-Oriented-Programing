#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance(): feet(0), inches(0) { };
        Distance(int f, float i): feet(f), inches(i) { };
        void getdist()
        {
            cout << "\n   Enter feet: "; cin >> feet;
            cout << "   Enter inches: "; cin >> inches;
        }
        void showdist() const
        {
	    cout << feet << "\'-" << inches << "\"" << endl;
        }

        void add_dist(Distance d2, Distance d3){
            inches = d2.inches + d3.inches;
            feet = 0;  
            if (inches >=12.0)
            {
                inches -=12;
                feet++;
            }
            feet += d2.feet + d3.feet;
        }
        void div_dist(Distance d2, int divisior)
        {
            float fltfeet = d2.feet + d2.inches/12.0;
            fltfeet /= divisior;
            feet = int(fltfeet); 
            inches = (fltfeet-feet)*12.0;
        }
};
int main()
{
    Distance dist[100];
    Distance total(0, 0.0), average;
    int n =0;
    char ans;
    do
    {
        cout << "Enter distance number " << n+1;
        dist[n++].getdist();
        
        cout << "Enter another (y/n)?: ";
        cin >> ans;      
    } while (ans!='n');
    
    for (int j =0; j<n; j++)
    {
        total.add_dist(total,dist[j]);
    }
    average.div_dist(total,n);
    cout << "The average is ";
    average.showdist();
    return 0;
}

 
