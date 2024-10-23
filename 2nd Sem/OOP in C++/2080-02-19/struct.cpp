// A phone no., such as (212)767-8900 can be thought of as having three parts:
// the area code (212), the exchange (767), and the number (8900).
// Write a Program that uses a structure to store the three parts of a phone
// number separately, call the structure phone. Create two structure variable of
// type phone. Initialize one, and have the user input a number for the other one.
// Then display both number. The interchange might look like this:
// Enter your area code, exchange and number: 145 555 1212
// Output:
// My number is (212)767-8900
// Your number is (415)555-1212

#include <iostream>
#include <conio.h>
using namespace std;

struct Phone
{
    int area_c;
    int exch_c;
    int number;

};


int main(){
    Phone num1, num2;
    num1.area_c=212;
    num1.exch_c=767;
    num1.number=8900;

    cout<<"Enter the area code: ";
    cin>>num2.area_c;
    cout<<"Enter the exchange code: ";
    cin>>num2.exch_c;
    cout<<"Enter the number: ";
    cin>>num2.number;

    cout<< "My number is ("<<num1.area_c<<")"<<num1.exch_c<<" - "<<num1.number<<endl;
    cout<< "Your number is ("<<num2.area_c<<")"<<num2.exch_c<<" - "<<num2.number<<endl;
    return 0;
}