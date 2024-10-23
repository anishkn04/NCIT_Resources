#include <iostream>
#include <conio.h>
using namespace std;

class Distance{
    int feet;
    int inch;
    public:
        void setDistance(){
            cout<<"Enter feet: "; cin>>feet;
            cout<<"Enter Inches: "; cin>>inch;
        }
        void displayDistance(){
            if(inch>11){
                int ext_inch = inch/12;
                inch = inch - ext_inch*12;
                feet += ext_inch;
            }
            cout<<"\nFeet: "<<feet<<" Inch: "<<inch;
        }

        void sum(Distance c2){
            int i = inch+c2.inch;
            if(i>11){
                int ext_inch = i/12;
                i = i - ext_inch*12;
                feet += ext_inch;
            }
            cout<<"\nThe sum is: ";
            cout<<"\nFeet: "<<feet+c2.feet;
            cout<<"\nInches: "<<i;
        }
};

int main(){
    Distance a, b;
    a.setDistance();
    b.setDistance();
    a.displayDistance();
    b.displayDistance();
    a.sum(b);
    return 0;
}