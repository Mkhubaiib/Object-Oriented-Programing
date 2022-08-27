#include <iostream>
using namespace std;

int count=0;

void globalVar();
int localVar();

int main(){
    for(int i=0; i<10; i++){
        globalVar();
        localVar();
    }
    
    int nCount = localVar();
    cout << "Using global variable \"I have been called " << count << " times\""<<endl;
    cout << "Using local variable \"I have been called " << nCount << " times\""<<endl;
    return 0;
}

void globalVar(){
    count++;
}

int localVar(){
    static int nCount = 0;
    nCount++;
    return nCount;
}