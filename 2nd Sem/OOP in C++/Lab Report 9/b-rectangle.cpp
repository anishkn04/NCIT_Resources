#include <iostream>
using namespace std;

class Rectangle{
    protected:
        double length;
        double breadth;
        double area;
    public:
        void readlb();
        void calcArea();
};

class Box:protected Rectangle{
    protected:
        double height;
        double volume;
    public:
        void readh();
        void calcVolume();
};

void Rectangle::readlb(){
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
}

void Rectangle::calcArea(){
    area = length*breadth;
    cout<<"The area is: "<<area;
}

void Box::readh(){
    readlb();
    cout<<"Enter height: ";
    cin>>height;
}

void Box::calcVolume(){
    calcArea();
    volume = area*height;
    cout<<"\nThe volume is: "<<volume;
}

int main(){
    Box b1;
    b1.readh();
    b1.calcVolume();
    return 0;
}