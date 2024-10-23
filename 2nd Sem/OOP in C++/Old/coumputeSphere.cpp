/** 2. Write and test the following computeSphere() function that returns the volume v and
surface area s of a sphere with the given radius.
void computeSphere(float &v,float &s,float r)**/

#include <iostream>
#include <conio.h>
using namespace std;

void computeSphere(float &v,float &s,float r){
    v = 4.0/3*3.14*r*r*r;
    s = 4*3.14*r*r;
}

int main(){
    cout<<"Enter the radius of sphere: ";
    float volume=0, surfaceArea=0, radius;
    cin>>radius;

    computeSphere(volume, surfaceArea, radius);

    cout<<"A sphere with radius "<<radius<<" has Volume = "<<volume<<" and Surface Area = "<<surfaceArea;

    return 0;
}