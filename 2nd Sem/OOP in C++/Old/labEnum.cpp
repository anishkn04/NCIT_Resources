#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;
int main()
{
enum days{sun, mon, tue, wed, thu, fri, sat};
days day1, day2;
int mid_day;
day1=sun;
day2=sat;
mid_day=wed;
cout<<"day1="<<day1<<endl<<"day2="<<day2<<endl<<"Middle="<<mid_day;
getch();
return 0;
}