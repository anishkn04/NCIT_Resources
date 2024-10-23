#include <iostream>
#include <cmath>
using namespace std;

class AccHolder{
    char *name;
    long int *accNum;
    long double *balance;
    static int record;
    public:
        void createAccount();
        void transaction(int choice);
        void display();
        ~AccHolder(){
            delete name;
            delete accNum;
            delete balance;
            name = NULL;
            accNum = NULL;
            balance = NULL;
        }
};

void AccHolder::createAccount(){
    name = new char[50];
    accNum = new long int;
    balance = new long double;
    cout<<"\nEnter customer's full name:"; 
    cin.getline(name, 50);
    cout<<"\nEnter customer's opening balance: "; cin>>*balance;
    *accNum =  79*10 + record;
    record++;
}

void AccHolder::transaction(int choice){
    switch (choice){
        case 1:
            long double deposit;
            cout<<"\nEnter the amount you want to deposit: "; cin>>deposit;
            *balance += deposit;
            cout<<"\nThe new balance is: "<<*balance;
            break;
        
        case 2:
            long double withdraw;
            cout<<"\nEnter the amount you want to withdraw: "; cin>>withdraw;
            if(withdraw < *balance || withdraw == *balance){
                *balance -= withdraw;
                cout<<"\nThe new balance is: "<<*balance;
            }
            else{
                cout<<"Insufficient Balance!"<<endl;
            }
            break;
        default:
            cout<<"\nInvalid choice!";
            break;
    }
}

int AccHolder::record;

void AccHolder::display(){
    cout<<"\nAccount Holder's Name: "<<name<<endl;
    cout<<"\nAccount Number: "<<*accNum<<endl;
    cout<<"\nBalance: "<<*balance<<endl;
}

int main(){
    int ch;
    AccHolder *acp = new AccHolder[10];
    while(1){
        cin.ignore();
        cout<<"\nWhat would you like to do?"<<endl<<endl;
        cout<<"1. Create new Account"<<endl;
        cout<<"2. Withdraw or deposit money"<<endl;
        cout<<"3. Display Account Information"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: "; cin>>ch;
        cin.ignore();
        
        switch (ch){
            case 1:
                acp->createAccount();
                break;

            case 2:
                int ch1;
                cin>>ch1;
                acp->transaction(ch1);
                break;

            case 3:
                acp->display();
                break;

            default:
                break;
            
        }
        if(ch==4){
            break;
        }
    }
    return 0;
}