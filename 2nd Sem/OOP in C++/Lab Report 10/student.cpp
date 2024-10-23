#include <iostream>
#include <cstring>
using namespace std;

class Person{
    protected:
        char name[50];
        int age;
    public:
        Person(const char n[50], int a){
            strcpy(name, n);
            age = a;
        }
        void display(){
            cout<<"\nName: "<<name<<endl<<"Age: "<<age<<endl;
        }
};

class Student:public Person{
    int roll;
    public:
        Student(const char n[50], int a, int roll):Person(n, a){
            this->roll = roll;
        }
        void display(){
            Person::display();
            cout<<"Roll: "<<roll;
        }
};

class Employee:public Person{
    int id;
    public:
        Employee(const char n[50], int a, int id):Person(n, a){
            this->id = id;
        }
        void display(){
            Person::display();
            cout<<"Your Employee id: "<<id;
        }
};

int main(){
    cout<<"Student: "<<endl;
    Student s1("Anish Neupane", 21, 8);
    s1.display();
    cout<<"\n\nEmployee: "<<endl;
    Employee e1("Not Anish", 28, 4);
    e1.display();
    return 0;
}