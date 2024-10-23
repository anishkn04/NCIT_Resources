#include <iostream>
#include <conio.h>
using namespace std;

class Complex;
void add(Complex, Complex);

class Complex{
    int real;
    int img;
    public:
        void setComplex(){
            cout<<"Enter Real: "; cin>>real;
            cout<<"Enter Imaginary: "; cin>>img;
        }
        void displayComplex(){
            cout<<"\n"<<real<<" + "<<img<<"i";
        }
    friend void add(Complex, Complex);
};

void add(Complex d1, Complex d2){
    Complex added;
    added.real = d1.real + d2.real;
    added.img = d1.img + d2.img;
    cout<<"\nThe sum is: ";
    added.displayComplex();
}

int main(){
    Complex c1, c2;
    c1.setComplex();
    c2.setComplex();
    c1.displayComplex();
    c2.displayComplex(); 
    add(c1, c2);
    return 0;
}