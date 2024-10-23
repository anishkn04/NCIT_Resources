#include <iostream>
#include <conio.h>
using namespace std;

class Rational{
    int num;
    int den;
    public:
        void setValue();
        void showRational();
        void showValue();
        void invert();
};

void Rational::setValue(){
    cout<<"Enter numerator: ";
    cin>>num;
    cout<<"Enter Denominator: ";
    cin>>den;
}

void Rational::showRational(){
    cout<<"\n"<<num<<"/"<<den;
}

void Rational::showValue(){
    cout<<"Value = "<<(float)num/(float)den;
}

void Rational::invert(){
    int x;
    x = num;
    num = den;
    den = x;
}

int main(){
    Rational x;
    x.setValue();
    cout<<"\nIn fraction: ";
    x.showRational();
    cout<<"\nIn decimal: ";
    x.showValue();
    cout<<"\nInverted: ";
    x.invert();
    cout<<"\nIn fraction: ";
    x.showRational();
    cout<<"\nIn decimal: ";
    x.showValue();
    return 0;
}