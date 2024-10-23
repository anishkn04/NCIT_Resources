#include <iostream>
#include <conio.h>
using namespace std;

class Time;
void add(Time, Time);

class Time{
    int hour;
    int min;
    int sec;
    public:
        void setTime(){
            cout<<endl<<"Enter hour: "; cin>>hour;
            cout<<"Enter minute: "; cin>>min;
            cout<<"Enter second: "; cin>>sec;
        }
        void displayTime(){
            if(sec>59){
                int ext_sec = sec/60;
                sec = sec - ext_sec*60;
                min += ext_sec;
            }
            if(min>59){
                    int ext_min = min/60;
                    min = min - ext_min*60;
                    hour += ext_min;
            }
            cout<<"\nTime: "<<hour<<" : "<<min<<" : "<<sec;
        }
    friend void add(Time, Time);
};

void add(Time d1, Time d2){
    Time added;
    added.hour = d1.hour + d2.hour;
    added.min = d1.min + d2.min;
    added.sec = d1.sec + d2.sec;
    cout<<"\nThe sum is: ";
    added.displayTime();
}

int main(){
    Time c1, c2;
    c1.setTime();
    c1.displayTime();
    c2.setTime();
    c2.displayTime(); 
    add(c1, c2);
    return 0;
}