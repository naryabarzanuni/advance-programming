#include <iostream>
using namespace std;

//int sumOfArray(int arr[],int size){
//    int sum=0;
//    for(int i=0;i< size;i++){
//        sum+=arr[i];
//    }
//    return sum;
//}
//another method to define array a function parameter
int sumOfArray(int* arr,int size){
    int sum=0;
    for(int i=0;i< size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int a[3]={10,20,30};
    cout<<sumOfArray(a,3)<<endl;

    return 0;
}

