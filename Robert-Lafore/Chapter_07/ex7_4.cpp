#include<iostream>
using namespace std;
int maxint(int *a,int);

int main()
{
    int size;
    cout << "Enter a number of integers: ";
    cin >> size;
    int numbers[size];
    for (int i=0; i<size; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    int indexNumber = maxint(numbers,size);
    cout << "The largest element: " << numbers[indexNumber];
    cout << "\nThe index number: " << indexNumber;  
   
    return 0;
}
int maxint(int *numbers, int size)
{
    int highest = 0, index = 0;
    
    for(int j=0;j<size;j++)
    {
        if(numbers[j]>highest)
        {
            highest = numbers[j];
            index = j;
        }
    }
    return index;
}