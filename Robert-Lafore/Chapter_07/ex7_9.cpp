#include<bits/stdc++.h>
using namespace std;

class Queue
{
	private:
		static const int MAX = 100;
		int a[MAX];
		int head, tail;
	public:
		Queue() {head = 0; tail = 0;}
		void put(int value){
            a[tail++ % 100] = value;
        }
		int get(void){
            return a[(100 - head--) % 100];
        }
};

int main()
{
	Queue q;
	q.put(11);
	q.put(22);
	cout << "1: " << q.get() << endl;
	cout << "2: " << q.get() << endl;
}