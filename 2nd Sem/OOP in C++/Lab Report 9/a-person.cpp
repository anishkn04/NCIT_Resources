#include <iostream>

using namespace std;

class Person{
    protected:
        char name[50];
        char address[50];
        long long int number;
};

class Student:protected Person{
    int id;
    public:
        void setData(){
            cout<<"Name?: "; cin.getline(name, 50);
            cout<<"Address?: "; cin.getline(address, 50);
            cout<<"Number?: "; cin>>number;
            cout<<"ID?: "; cin>>id;
        }
        void getData(){
            cout<<"Name: "<<name<<endl<<"Address: "<<address<<endl<<"Number: "<<number<<endl<<"ID: "<<id<<endl;
        }
};

int main(){
    Student S1;
    S1.setData();
    S1.getData();
    return 0;
}