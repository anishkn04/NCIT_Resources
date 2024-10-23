#include <iostream>
#include <conio.h>
using namespace std;

inline double si(double p, double t, double r=1.5){
    return p*t*r/100;
}

int main(){
    double principal, time;
    cout<<"Enter the principal: ";
    cin>>principal;
    cout<<"Enter time: ";
    cin>>time;
    cout<<"The SI is: "<<si(principal, time);
    return 0;
}