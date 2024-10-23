#include <iostream>
#include <conio.h>
using namespace std;

inline double volume(double l){return l*l*l;}
inline double volume(double r, double h){return 22.0/7*r*r*h;}
inline double volume(double l, double b, double h){ return l*b*h;}

int main(){
    int choice;
    cout<<"Volume for?\n1. Cube\n2. Cylinder\nElse. Cuboid"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        double length;
        cout<<"Enter length: ";
        cin>>length;
        cout<<"The voulme for cube is: "<<volume(length);
        break;
    case 2:
        double height, rad;
        cout<<"Enter Radius and height: ";
        cin>>rad>>height;
        cout<<"The Volume of Cylinder is: "<<volume(rad, height);
    default:
        double length, breadth, height;
        cout<<"Enter length, breadth, height: ";
        cin>>length>>breadth>>height;
        cout<<"The Volume of Cuboid is: "<<volume(length, breadth, height);
        break;
    }
    return 0;
}