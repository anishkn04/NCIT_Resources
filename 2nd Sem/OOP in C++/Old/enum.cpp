#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    enum days{sun,mon,tue,wed,thu,fri,sat};
    days day1, day2;
    int mid_day;
    day1=sun;
    day2=sat;
    mid_day=wed;
    cout<<"day 1 = "<<day1<<endl<<"day 2 = "<<day2<<endl<<"mid_day = "<< mid_day;
    getch();
    return 0;
}