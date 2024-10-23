// A phone no., such as (212)767-8900 can be thought of as having three parts:
// the area code (212), the exchange (767), and the number (8900).
// Write a Program that uses a structure to store the three parts of a phone
// number separately, call the structure phone. Create two structure variable of
// type phone. Initialize one, and have the user input a number for the other one.
// Then display both number. The interchange might look like this:
// Enter your area code, exchange and number: 415 555 1212
// Output:
// My number is (212)767-8900
// Your number is (415)555-1212

#include <iostream>
#include <conio.h>
using namespace std;

class Phone{
    public:
        int area_c;
        int exch_c;
        int num;

    public:
        Phone(int area, int exch, int number){
            area_c = area;
            exch_c = exch;
            num = number;
        }
};

int main(){
    Phone n1(212, 767, 8900);
    int ar, ex, n;

    cout<<"Enter the area code: ";
    cin>>ar;
    cout<<"Enter the exchange code: ";
    cin>>ex;
    cout<<"Enter the number: ";
    cin>>n;

    Phone n2(ar, ex, n);
    
    cout<< "My number is ("<<n1.area_c<<")"<<n1.exch_c<<"-"<<n1.num<<endl;
    cout<< "Your number is ("<<n2.area_c<<")"<<n2.exch_c<<"-"<<n2.num<<endl;

    return 0;
}

