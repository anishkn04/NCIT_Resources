#include <iostream>
#include <conio.h>
using namespace std;

class Distance;
void add(Distance, Distance);

class Distance{
    int feet;
    int inch;
    public:
        void setDistance(){
            cout<<"Enter Feet: "; cin>>feet;
            cout<<"Enter Inch: "; cin>>inch;
        }
        void displayDistance(){
            if(inch>11){
                int ext_inch = inch/12;
                inch = inch - ext_inch*12;
                feet += ext_inch;
            }
            cout<<"\nFeet: "<<feet<<" Inch: "<<inch;
        }
    friend void add(Distance, Distance);
};

void add(Distance d1, Distance d2){
    Distance added;
    added.feet = d1.feet + d2.feet;
    added.inch = d1.inch + d2.inch;
    cout<<"\nThe sum is: ";
    added.displayDistance();
}

int main(){
    Distance c1, c2;
    c1.setDistance();
    c2.setDistance();
    c1.displayDistance();
    c2.displayDistance(); 
    add(c1, c2);
    return 0;
}