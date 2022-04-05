#include <iostream>

using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    double a=10,b=15;
    double *p,*q;
    p=&a;
    q=&b;

//    cout<<a<<" address is:"<<p<<endl;
//    cout<<b<<" address is:"<<q<<endl;

    cout<<a<<" or "<<*p<<endl;
    *p=120;
    cout<<"-----"<<a<<endl;

    return 0;
}
