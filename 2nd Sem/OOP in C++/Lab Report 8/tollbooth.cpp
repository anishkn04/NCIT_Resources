#include <iostream>
using namespace std;

class TollBooth{
    unsigned int numCar;
    double totalMoney;
    public:
        TollBooth(){
            numCar = 0;
            totalMoney = 0;
        }
        void payingCar(){
            numCar++;
            totalMoney += 5;
        }
        void noPayCar(){
            numCar++;
        }
        void display(){
            cout<<"\n\n\nThe total number of car that have passed: "<<numCar<<endl;
            cout<<"The total toll payed by cars: "<<totalMoney<<endl;
        }
};

int main(){
    TollBooth TB;
    int n;
    do{
        cout<<"\n\n\n\tTollBooth By The Bridge\nPress corresponding number as shown below:"<<endl;
        cout<<"1. Car passed by paying a toll\n2. Car passed without paying a toll\n3. Display the data\n4. Exit"<<endl;
        cin>>n;

        switch(n){
            case 1:
                TB.payingCar();
                break;

            case 2:
                TB.noPayCar();
                break;

            case 3:
                TB.display();
                break;
            
            default:
                break;
        }
    }while(n!=4);

    return 0;
}