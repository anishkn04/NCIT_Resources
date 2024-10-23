#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

class Point{
    int x;
    int y;
    int z;
    public:
        void setCoord();
        void showCoord();
        double distance();
};

void Point::setCoord(){
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
}

void Point::showCoord(){
    cout<<"("<<x<<","<<y<<","<<z<<")";
}

double Point::distance(){
    double dis;
    dis = sqrt((x*x)+(y*y)+(z*z));
    return dis;
}

int main(){
    Point a;
    a.setCoord();
    cout<<"The distance is: "<<a.distance()<<endl<<"The coordinates are: ";
    a.showCoord();
    return 0;
}