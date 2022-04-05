#include <iostream>

using namespace std;
//---------------------
struct Rectangle{
    double h;
    double w;
};
//---------------------
void readRectangle(Rectangle& r){
    cout<<"Enter the height of rectangle: ";
    cin>>r.h;

    cout<<"Enter the width of rectangle: ";
    cin>>r.w;
}
//---------------------
double areaOfRectangle(const Rectangle& r){
    return r.w*r.h;
}
//---------------------
int main() {
    const int NUM_OF_RECTANGLES=10;
    Rectangle rect[NUM_OF_RECTANGLES];

    for(int i=0; i<NUM_OF_RECTANGLES; i++){
        readRectangle(rect[i]);
    }

    for(int i=0; i<NUM_OF_RECTANGLES; i++){
        cout<<"The area is: "<<areaOfRectangle(rect[i])<<endl;
    }
//    rect[0].h
//    rect[0].w
    return 0;
}
//----------------------
//تمرین ۲
/* Rectangle x;
 * Rectangle *p;
 * p=&x;
 * (*p).h=12;
 * (*p).w=4;
 *  googled: struct pointer c++
 * */