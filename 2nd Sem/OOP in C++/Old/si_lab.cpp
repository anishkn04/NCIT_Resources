//Write a program to calculate simple interest using default value of r =1.5%. Ask the user for Principal amount and Time SI=PTR/100 .

#include <iostream>
#include <conio.h>
using namespace std;

inline double si(double principal, double time, double rate = 1.5){
    return principal*time*rate/100;
}

int main(){
    cout<<"Enter the Principal and Time to calculate interest"<<endl;
    double p, t;
    cin>>p>>t;
    cout<<"The total Interest is: "<<si(p, t);
    return 0;
}