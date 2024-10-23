#include <iostream>
using namespace std;

class Base{
    protected:
        int x;
    public:
        Base(){};
        Base(int a){
            x = a;
            cout<<"\nConstructor of Base";
        }
        void display(){
            cout<<"\nx: "<<x;
        }
};

class Derived:public Base{
    int y, z;
    public:
        Derived(){};
        Derived(int a, int b, int c):Base(a){
            y = b;
            z = c;
            cout<<"\nConstructor of Derived";
        }
        
        void display(){
            Base::display();
            cout<<"\ny: "<<y<<"\nz: "<<z<<endl;
        }
};

int main(){
    Derived dobj(10, 20, 30);
    dobj.display();
    return 0;
}