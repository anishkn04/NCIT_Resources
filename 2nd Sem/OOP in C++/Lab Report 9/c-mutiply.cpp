#include <iostream>
using namespace std;

class Base{
    protected:
        int b;
};

class Child:protected Base{
    protected:
        float c;
};

class Grandchild:protected Child{
    public:
        void setData(){
            cout<<"Enter b and c: ";
            cin>>b>>c;
        }
        void mult(){
            cout<<"Result: "<<b*c;
        }
};

int main(){
    Grandchild gc1;
    gc1.setData();
    gc1.mult();
    return 0;
}