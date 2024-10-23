#include <iostream>
#include <cstring>
using namespace std;

class University{
    protected:
        char name[50];
        char location[50];
    public:
        void setUni(const char *n, const char *l){
            strcpy(name, n);
            strcpy(location, l);
        }
        void display(){
            cout<<"\nUniversity Name: "<<name;
            cout<<"\nUniversity Location: "<<location;
        }
};

class Affiliated: virtual public University{
    protected:
        char a_name[50];
        char address[50];
        int no_of_programs;
    public:
        void setAffi(const char *n, const char *l, const char *an, const char *al, int no){
            University::setUni(n, l);
            strcpy(a_name, an);
            strcpy(address, al);
            no_of_programs = no;
        }
        void display(){
            cout<<"\nAffiliated College Name: "<<a_name;
            cout<<"\nAffiliated college address: "<<address;
            cout<<"\nNo of programs: "<<no_of_programs;
        }
};

class Constituent: virtual public University{
    protected:
        char school[50];
        char dean[50];
        char name_of_program[50];
    public:
        void setConsti(const char *n, const char *l, const char *s, const char *d, const char *n_o_p){
            University::setUni(n, l);
            strcpy(school, s);
            strcpy(dean, d);
            strcpy(name_of_program, n_o_p);
        }
        void display(){
            cout<<"\nConstituent College Name: "<<school;
            cout<<"\nADean's Name: "<<dean;
            cout<<"\nName of program: "<<name_of_program;
        }
};

class Student: public Affiliated, public Constituent{
    char s_name[50];
    char program[50];
    int enrolled;
    public:
        void set(const char *un, const char *ul, const char *cs, const char *cd, const char *c_n_o_p, const char *an, const char *al, int no, const char *st_name, const char *st_prog, int en){
            setConsti(un, ul, cs, cd, c_n_o_p);
            setAffi(un, ul, an, al, no);
            strcpy(s_name, st_name);
            strcpy(program, st_prog);
            enrolled = en;
        }
        void show(){
            University::display();
            Affiliated::display();
            Constituent::display();
            cout<<"\nStudent name: "<<s_name;
            cout<<"\nEnrolled Program: "<<program;
            cout<<"\nEnrolled Year: "<<enrolled;
        }
};

int main(){
    Student S1;
    S1.set("PoU", "Pokhara", "SOE", "Anish KN", "Software", "NCIT", "Balkumari", 5, "Birat Aryal", "SE", 2022);
    S1.show();
    return 0;
}