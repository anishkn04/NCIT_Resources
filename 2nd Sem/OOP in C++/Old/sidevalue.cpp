#include <iostream>
#include <conio.h>
using namespace std;

inline double multi(double n1, double n2){
    return n1*n2;
}
inline double divide(double n1, double n2){
    return n1/n2;
}

int main(){
    cout<<"Enter two values ";
    double a, b;
    cin>>a>>b;
    cout<<"The multiplied value is "<< multi(a, b) <<" and divided is "<< divide(a, b)<<endl;
    return 0;
}