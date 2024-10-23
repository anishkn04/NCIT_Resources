#include <iostream>
#include <conio.h>
using namespace std;

class Time{
    int hour;
    int min;
    int sec;
    public:
        void setTime(){
            cout<<"Enter Hour: "; cin>>hour;
            cout<<"Enter Minute: "; cin>>min;
            cout<<"Enter Seconds: "; cin>>sec;
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

        void sum(Time t2){
            int h, m, s;
            h = hour+t2.hour;
            m = min+t2.min;
            s = sec+t2.sec;
            if(s>59){
                int ext_sec = s/60;
                s = s - ext_sec*60;
                m += ext_sec;
            }
            if(m>59){
                    int ext_min = m/60;
                    m = m - ext_min*60;
                    h += ext_min;
            }
            cout<<"\nThe sum is: ";
            cout<<"\nHour: "<<h;
            cout<<"\nMinute: "<<m;
            cout<<"\nSecond: "<<s;
        }
};

int main(){
    Time a, b;
    a.setTime();
    b.setTime();
    a.displayTime();
    b.displayTime();
    a.sum(b);
    return 0;
}