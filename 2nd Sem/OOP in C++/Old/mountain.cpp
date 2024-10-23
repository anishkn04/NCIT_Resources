#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Mountain;
void compare(Mountain m1, Mountain m2);

class Mountain{
    char name[50];
    int height;
    char location[50];
    public:
        Mountain(char n[50], int h, char l[50] ){
            strcpy(name, n);
            strcpy(location, l);
            height = h; 
        }

        void display(){
            cout<<"Name: "<<name;
            cout<<"\nLocation: "<<location;
            cout<<"\nHeight: "<<height;
        }

    friend void compare(Mountain m1, Mountain m2){
        if(m1.height>m2.height){
            m1.display();
        }
        else{
            m2.display();
        }
    }
};

int main(){
    Mountain a("Himal", 8400, "Thau");
    Mountain b("Pahad", 8000, "Tyaha");
    compare(a,b);
    return 0;
}