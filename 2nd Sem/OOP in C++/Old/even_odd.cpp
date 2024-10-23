#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int num;
    enum flag{fal, tru};
    flag even;
    cout<<"Enter a number to check even or odd"<<endl;
    cin>>num;
    if(num%2==0){
        even = tru;
    }
    else{
        even = fal;
    }

    if(even){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
    getch();
}