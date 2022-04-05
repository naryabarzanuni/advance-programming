#include <iostream>
using namespace std;

int main() {
    //1. define a pointer to store the address of beginning of array
    int* p=0;

    //2. allocate memory
    p=new int[3];

    //3. using the array
    p[0]=10;
    cin>>p[1];
    //.....


    //4. deallocate memory
    delete[] p;
    return 0;
}

