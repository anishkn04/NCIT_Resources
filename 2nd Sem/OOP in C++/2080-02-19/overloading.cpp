// l. Write a program to find the vo ume o
// o Jects; name y cu e, cym er an
// rectangular box using the same function name, volume().

#include <iostream>
#include <conio.h>
using namespace std;

double volume(double a){
    return a*a*a;
}
double volume(double r, double h){
    return 3.14*r*r*h;
}
double volume(double l, double b, double h){
    return l*b*h;
}
int main(){
    double side, rad, height_cyl, length, breadth, height;
    cout<<"Enter the length of side for cube";
    cin>>side;
    cout<<"Enter the radius of base and height for cylinder";
    cin>>rad>>height_cyl;
    cout<<"Enter the length, breadth and height of side for Cuboid";
    cin>>length>>breadth>>height;

    cout<<"The Volume of Cube = "<<volume(side)<<", Cylinder = "<<volume(rad, height_cyl)<<"and Cuboid = "<<volume(length, breadth, height);

    return 0;
}