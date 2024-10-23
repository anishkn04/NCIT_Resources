#include <iostream>
#include <cmath>
using namespace std;

// class Counter{
//     unsigned int count;
//     public:
//         Counter(){
//             count=0;
//         }
//         int get_count(){
//             return count;
//         }
// };

// int main(){
//     Counter c1, c2;
//     cout<<"C1 = "<< c1.get_count()<<endl;
//     cout<<"C2 = "<< c2.get_count()<<endl;
//     return 0;
// }

// ..........................

// class Polar{
//     double radius;
//     double angle;
//     public:
//         Polar(){
//             radius = 0.0;
//             angle = 0.0;
//         }
//         Polar(double r, double a){
//             radius = r;
//             angle = a;
//         }
//         void display(){
//             cout<<"rad = "<<radius << " and angle = "<<angle<<endl;
//         }
// };

// int main(){
//     Polar pol(10.00, 0.75);
//     Polar poll;

//     pol.display();
//     poll.display();
//     return 0;
// }

// ..........................

// class RollCode{
//     int id;
//     public:
//         RollCode(){
//             id = 5;
//         }
//         RollCode(RollCode &r){
//             id = r.id;
//         }
//         int getId(){
//             return id;
//         }
// };

// int main(){
//     RollCode r1;
//     RollCode r2(r1);
//     RollCode r3 = r1;
//     cout<<"ID of r1 is: "<<r1.getId()<<endl;
//     cout<<"ID of r2 is: "<<r2.getId()<<endl;
//     cout<<"ID of r3 is: "<<r3.getId()<<endl;
//     return 0;
// }

// ..........................

// class Car{
//     static int count;
//     public:
//         Car(){
//             count++;
//             cout<<"There are "<<count<<" number of cars"<<endl;
//         }
//         ~Car(){
//             count--;
//             cout<<"There are "<<count<<" number of cars"<<endl;
//         }
// };

// int Car::count;


// int main(){
//     cout<<"We are in main"<<endl;
//     Car c1;
//     Car c2;
//     Car c3;
//     Car c5;
//     {
//         cout<<"We are in block 1"<<endl;
//         Car c5;
//     }
//     {
//         cout<<"We are in block 2"<<endl;
//         Car c6;
//     }
//     cout<<"We have re-entered main"<<endl;
//     return 0;
// }

// ..........................

class Info{
    int data;
    public:
        Info();
        int display(){
            return data;
        }
        ~Info();
};

Info::Info(){data=10;}
Info::~Info(){data = 0;}

int main(){
    Info i;
    {
        Info j;
        cout<<"We are inside the inner scope"<<endl;
        cout<<"J's data = "<<j.display()<<endl;
    }
    cout<<"We are in i's scope"<<endl;
    cout<<"I's data = "<<i.display()<<endl;
    
}