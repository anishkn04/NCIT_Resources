// 2. Similarly write a program to find the Area of cube, cylinder and rectangle usmg t e
// concept of function overloading.

#include <iostream>
#include <conio.h>
using namespace std;

double area(double a){
    return 6*a*a;
}
double area(double r, double h){
    return 2*3.14*r*r+2*3.14*r*h;
}
double area(double l, double b, double h){
    return 2*((l*b)+(l*h)+(b*h));
}

int main(){
    double side, rad, height_cyl, length, breadth, height;
    cout<<"Enter the length of side for cube";
    cin>>side;
    cout<<"Enter the radius of base and height for cylinder";
    cin>>rad>>height_cyl;
    cout<<"Enter the length, breadth and height of side for Cuboid";
    cin>>length>>breadth>>height;

    cout<<"The area of Cube = "<<area(side)<<", Cylinder = "<<area(rad, height_cyl)<<" and Cuboid = "<<area(length, breadth, height);

    return 0;
}