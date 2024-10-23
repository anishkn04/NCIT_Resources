#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Date{
    public:
        int year;
        int month;
        int day;
};

class Patient{
    public:
        char name[50];
        int age;
        int bed_no;
        char illness[50];
        Date dob;
        char gender;
        int ward;
        Date admit;
};

int main(){
    Patient P1;
    strcpy(P1.name, "Birami Saathi");
    P1.age = 23;
    P1.bed_no = 10;
    strcpy(P1.illness, "Hypoglycemia");
    P1.dob.year = 2000;
    P1.dob.month = 01;
    P1.dob.day = 01;
    P1.gender = 'M';
    P1.ward = 8;
    P1.admit.year = 2023;
    P1.admit.month = 06;
    P1.admit.day = 07;

    cout<<P1.name<<", Age: "<<P1.age<<" (DOB: "<<P1.dob.day<<"-"<<P1.dob.month<<"-"<<P1.dob.year<<") was admitted to this hospital\
 on "<<P1.admit.day<<"-"<<P1.admit.month<<"-"<<P1.admit.year<<" and is staying at Ward no.: "<<P1.ward<<" , Bed no.:"<<P1.bed_no<<" due to illness: "\
    <<P1.illness;

    return 0;
}