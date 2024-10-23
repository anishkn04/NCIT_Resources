#include <iostream>
#include <conio.h>
using namespace std;

inline double mul(double a, double b){return a*b;}
inline double divide(double a, double b){return a/b;}

int main(){
    double num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"THe multiplication gives: "<<mul(num1, num2)<<" and division gives: "<<divide(num1,num2);
    return 0;
}