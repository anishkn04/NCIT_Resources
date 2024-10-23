#include <iostream>
#include <cstring>
using namespace std;

class Mountain{
    char name[30];
    char location[30];
    float height;
    public:
        Mountain(){}
        Mountain(char *n, char *l, float h){
            strcpy(name, n);
            strcpy(location, l);
            height = h;
        }
        void display(){
            cout<<"\nName: "<<name<<"\nLocation: "<<location<<"\nHeight: "<<height;
        }
        int operator >(Mountain m){
            if(height>m.height){
                return 1;
            }else{
                return 0;
            }
        }
};

int main(){
    Mountain m1("Everest", "Nepal", 8848), m2("Fuji", "Japan", 8849);
    if(m1>m2){
        cout<<"Greatest: ";
        m1.display();
    }
    else if(m2>m1){
        cout<<"Greatest: ";
        m2.display();
    }
    else{
        cout<<"Both are equal"<<endl;
        m1.display();
        m2.display();
    }
    return 0;
}