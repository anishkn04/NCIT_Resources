#include <iostream>
using namespace std;
class Shape{
protected:
    double dimOne, dimTwo;
public:
    void set(){
        cout<<"\nEnter two dimensions: ";
        cin>>dimOne>>dimTwo;
    }
    virtual double area() = 0;
};

class Rectangle: public Shape{
public:
    double area(){
        return dimOne*dimTwo;
    }
};

class Triangle:public Shape{
public:
    double area(){
        return 1.0/2 * dimOne*dimTwo;
    }
};

int main(){
    Shape *sptr;
    Rectangle robj;
    robj.set();
    sptr = &robj;
    cout<<"\nArea of Rectangle: "<<sptr->area();
    Triangle tobj;
    tobj.set();
    sptr = &tobj;
    cout<<"\nArea of Triangle: "<<sptr->area();
}