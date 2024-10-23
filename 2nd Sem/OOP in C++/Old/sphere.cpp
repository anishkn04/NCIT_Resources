#include <iostream>
#include <conio.h>
using namespace std;

inline void computeSphere(double r, double &v, double &a){
    v = 4.0/3*3.14*r*r;
    a = 4*3.14*r*r;
}

int main(){
    double radius, volume, surface;
    cout<<"Enter radius: ";
    cin>>radius;
    computeSphere(radius, volume, surface);
    cout<<"The Volume is: "<<volume<<" and Surface Area is: "<<surface;
    return 0;
}