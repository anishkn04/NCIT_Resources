#include <iostream>
using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(){}
        Time(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }
        void display(){
            cout<<"\nTime: "<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
        }
        Time operator +(Time T){
            Time Res;
            Res.hours = hours+T.hours;
            Res.minutes = minutes+T.minutes;
            Res.seconds = seconds+T.seconds;
            return Res;
        }

        // 
        // To fix time, unnecessary if feels overwhelming:
        // void fixTime(){
            // if(seconds>59){
                // int min = seconds/60;
                // seconds -= min*60;
                // minutes += min;
            // }
            // if(minutes>59){
                // int hr = minutes/60;
                // minutes -= hr*60;
                // hours += hr;
            // }
        // }
};

int main(){
    Time T1(5, 56, 30), T2(2, 15, 15), T3;
    T3 = T1+T2;
    // T3.fixTime();
    T3.display();
    return 0;
}