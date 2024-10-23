#include <iostream>
#include <conio.h>
using namespace std;

class Person{
    char name[50];
    int age;
    char gender;
    long long int telephone;
    public:
        void setData();
        void showData();
};

void Person::setData(){
    cout<<"Enter Name: ";
    cin.getline(name, 50);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter gender(M/F): ";
    cin>>gender;
    gender = toupper(gender);
    cout<<"Enter telephone: ";
    cin>>telephone;
}

void Person::showData(){
    cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nGender: "<<gender<<"\nTelephone: "<<telephone;
}

int main(){
    Person p1;
    p1.setData();
    p1.showData();
    return 0;
}