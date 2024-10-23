#include <iostream>
using namespace std;

class Base{
    protected:
        int x;
        int y;
    public:
        void set(){
            cout<<"Enter x&y: ";
            cin>>x>>y;
        }
};

class DerivedOne:public Base{
    protected:
        int sum;
    public:
        void calculateSum(){
            sum=x+y;
            cout<<"The sum is: "<<sum;
        }
};

class DerivedTwo:public Base{
    protected:
        int product;
    public:
        void calculateProduct(){
            product = x*y;
            cout<<"\nThe product is: "<<product;
        }
};

int main(){
    DerivedOne D1;
    DerivedTwo D2;
    D1.set();
    D2.set();
    D1.calculateSum();
    D2.calculateProduct();
    return 0;
}