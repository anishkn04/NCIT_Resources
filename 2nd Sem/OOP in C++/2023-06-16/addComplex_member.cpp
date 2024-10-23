#include <iostream>
#include <conio.h>
using namespace std;

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

        void sum(Complex c2){
            cout<<"\nThe sum is: ";
            cout<<"\nReal: "<<real+c2.real;
            cout<<"\nImaginary: "<<real+c2.real;
        }
};

int main(){
    Complex a, b;
    a.setComplex();
    b.setComplex();
    a.displayComplex();
    b.displayComplex();
    a.sum(b);
    return 0;
}