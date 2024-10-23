#include <iostream>
using namespace std;

double si(double p, double t, double r=8.5){
    return p*t*r/100;
}

int main(){
    double pri, time;
    int ch;

    cout<<"Enter Principal and Time: ";
    cin>>pri>>time;
    
    cout<<"Enter 1 for custom rate or anything else for default"<<endl;
    cin>>ch;

    switch(ch){
        case 1:
            double rate;
            cout<<"Enter the rate: ";
            cin>>rate;
            cout<<"The interest is: "<<si(pri, time, rate);
            break;
        default:
            cout<<"The interest is: "<<si(pri, time);
            break;
    }
}