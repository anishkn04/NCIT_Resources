#include <iostream>
using namespace std;

class Rectangle{
    protected:
        double l;
        double b;
        double area;
    public:
        Rectangle(int l, int b){
            this->l=l;
            this->b=b;
        }
        void show(){
            cout<<"Length: "<<l<<" Breadth: "<<b;
        }
        double calcArea(){
            area = l*b;
            return area;
        }
};

class Box:public Rectangle{
    protected:
        double h;
        double volume;
    public:
        Box(int l, int b, int h):Rectangle(l , b){
            this->h=h;
        }
        void show(){
            cout<<" Height: "<<h;
        }
        double calcVolume(){
            volume = calcArea()*h;
            return volume;
        }
};

int main(){
    Box b1(5, 10, 15);
    b1.Rectangle::show();
    b1.show();
    cout<<"\nThe volume is: "<< b1.calcVolume();
    return 0;
}