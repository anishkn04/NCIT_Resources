#include <iostream>
#include <cstring>
using namespace std;

class Staff {
protected:
    char name[50];
    char address[50];
public:
    Staff() {}
    Staff(const char* n, const char* add) {
        strcpy(name, n);
        strcpy(address, add);
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
    }
};

class Teaching : virtual public Staff {
protected:
    char faculty[50];
    char designation[50];
public:
    Teaching() {}
    Teaching(const char* n, const char* add, const char* fac, const char* des) : Staff(n, add) {
        strcpy(faculty, fac);
        strcpy(designation, des);
    }
    void display() {
        Staff::display();
        cout << "\nFaculty: " << faculty;
        cout << "\nDesignation: " << designation;
    }
};

class Non_Teaching : virtual public Staff {
protected:
    int id;
    char designation[50];
public:
    Non_Teaching() {}
    Non_Teaching(const char* n, const char* add, int i, const char* des) : Staff(n, add) {
        id = i;
        strcpy(designation, des);
    }
    void display() {
        Staff::display();
        cout << "\nID: " << id;
        cout << "\nDesignation: " << designation;
    }
};

class Admin : public Teaching, public Non_Teaching {
    int yoe;
public:
    Admin() {}
    Admin(const char* n, const char* add, const char* fac, const char* des, int years) : Teaching(n, add, fac, des), Non_Teaching(n, add, 0, des), Staff(n, add) {
        yoe = years;
    }
    Admin(const char* n, const char* add, int i, const char* des, int years) : Teaching(n, add, "", des), Non_Teaching(n, add, i, des), Staff(n, add) {
        yoe = years;
    }
    void display() {
        if (id != 0) {
            Non_Teaching::display();
        } else {
            Teaching::display();
        }
        cout << "\nTotal years of experience: " << yoe;
    }
};

int main() {
    Admin A1("Not Anish", "Kalanki", 8, "Not Sure", 20);
    Admin A2("Anish KN", "Banasthali", "Science", "Not Declared", 10);
    A1.display();
    cout<<endl<<endl;
    A2.display();
    return 0;
}