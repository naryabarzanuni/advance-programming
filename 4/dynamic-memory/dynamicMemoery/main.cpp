#include <iostream>

using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    //a dynamic double variable

    //1. define a pointer to store the address of variable
    double *p=0;

    //2. building a dynamic memory and assign its address to p
    p=new double;

    //3. using it according to last session
    cout<<"Enter your number";
    cin>>(*p);
    (*p)+=4;
    cout<<(*p);

    //4. releasing the memory
    delete p;

    return 0;
}
