#include <iostream>

using namespace std;
//---------------------
struct Rectangle{
    double h;
    double w;
};

//---------------------
int main() {
    Rectangle x;
//    Rectangle y;
//    Rectangle z;
    cin>>x.h>>x.w;

    cout<<x.h*x.w;


    return 0;
}
//----------------------
