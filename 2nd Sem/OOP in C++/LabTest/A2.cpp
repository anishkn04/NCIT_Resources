#include <iostream>
#include <cstring>
using namespace std;

class String{
    char str[50];
    public:
        String(){}
        String(char s[]){
            strcpy(str, s);
        }
        void display(){
            cout<<"\nString: "<<str;
        }

        String operator +(String S){
            String Res;
            strcpy(Res.str, str);
            strcat(Res.str, S.str);
            return Res;
        }
};

int main(){
    String s1("Anish"), s2(" Neupane"), s3;
    s3 = s1+s2;
    s3.display();
    return 0;
}