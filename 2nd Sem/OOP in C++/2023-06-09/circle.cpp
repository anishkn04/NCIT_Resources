#include <iostream>
#include <conio.h>
using namespace std;

class Circle{
    double rad;
    public:
        void setRad();
        void area();
        void perimeter();
};

void Circle::setRad(){
    cout<<"Enter radius: ";
    cin>>rad;
}

void Circle::area(){
    cout<<"\nArea: "<<22.0/7*rad*rad;
}

void Circle::perimeter(){
    cout<<"\nPerimeter: "<<2.0*22.0/7.0*rad;
}

int main(){
    Circle c1;
    c1.setRad();
    c1.area();
    c1.perimeter();
    return 0;
}