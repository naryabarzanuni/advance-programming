#include <iostream>
using namespace std;
int main() {
    int a[3];
    int* p=0;
    //getting the beginning address of array
    p=a;//p=&(a[0])

    //using array through its address
    *(p)=10;//a[0]
    *(p+1)=20;//a[1]
    *(p+2)=30;//a[2]

    cout<<"a[0]:"<<a[0]<<" a[1]:"<<a[1]<<" a[2]:"<<a[2]<<endl;

    cout<<"a[0]:"<<p[0]<<" a[1]:"<<p[1]<<" a[2]:"<<p[2]<<endl;
    return 0;
}
