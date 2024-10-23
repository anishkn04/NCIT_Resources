#include <iostream>
using namespace std;

class College{
    protected:
        char Cname[30];
        char Clocation[30];
    public:
        College(){
            cout<<"\nEnter College Name: "; cin.getline(Cname, 30);
            cout<<"\nEnter College Location: "; cin.getline(Clocation, 30);
        }
        void display(){
            cout<<"\nCollege Name: "<<Cname;
            cout<<"\nCollege Location: "<<Clocation;
        }
};

class Student: virtual public College{
    protected:
        char Sname[30];
        int roll;
    public:
        Student():College(){
            cout<<"\nEnter Student's Name: "; cin.getline(Sname, 50);
            cout<<"\nEnter Roll No.: "; cin>>roll;
        }
        void display(){
            cout<<"\nStudent's Name: "<<Sname;
            cout<<"\nRoll: "<<roll;
        }
};

class Teacher: virtual public College{
    protected:
        char Tname[30];
        int id;
    public:
        Teacher():College(){
            cin.ignore();
            cout<<"\nEnter Teacher's Name: "; cin.getline(Tname, 50);
            cout<<"\nEnter ID No.: "; cin>>id;
        }
        void display(){
            cout<<"\nTeacher's Name: "<<Tname;
            cout<<"\nID: "<<id;
        }
};

class Books: public Student, public Teacher{
    char bookname[30];
    char author[30];
    int book_code;
    public:

        Books():Student(), Teacher(){
            cin.ignore();
            cout<<"\nEnter book's name: "; cin.getline(bookname, 30);
            cout<<"\nEnter author's name: "; cin.getline(author, 30);
            cout<<"\nEnter Book code: "; cin>>book_code;
        }
        void display(){
            Student::display();
            Teacher::display();
            cout<<"\nBook's Name: "<<bookname;
            cout<<"\nAuthor's Name: "<<author;
            cout<<"\nBook Code: "<<book_code;
        }
};

int main(){
    Books B1;
    B1.College::display();
    B1.display();
    return 0;
}