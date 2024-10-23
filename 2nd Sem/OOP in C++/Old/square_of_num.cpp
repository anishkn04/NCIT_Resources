#include <iostream>
#include <conio.h>
using namespace std;

inline int square(int num){
    return num*num;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The square is: "<<square(n);
    return 0;
}