#include <iostream>
using namespace std;

class Alpha{
    protected:
        int a;
    public:
        Alpha(int a){
            this->a=a;
        }
        void showAlpha(){
            cout<<"\na = "<<a;
        }
};

class Beta{
    protected:
        int b;
    public:
        Beta(int b){
            this->b=b;
        }
        void showBeta(){
            cout<<"\nb = "<<b;
        }
};

class Gamma:public Alpha, public Beta{
    protected:
        int c;
    public:
        Gamma(int a, int b, int c):Alpha(a), Beta(b) {
            this->c=c;
        }
        void showGamma(){
            cout<<"\nc = "<<c;
        }
};

int main(){
    Gamma d1(5, 6, 7);
    d1.showAlpha();
    d1.showBeta();
    d1.showGamma();
    return 0;
}