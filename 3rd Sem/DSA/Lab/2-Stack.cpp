#include <iostream>
using namespace std;

int stack[50], tos=-1, n, x, choice; 

void push();
void pop();
void display();

int main(){
    cout<<"\nEnter the number of data:";
    cin>>n;
    do{
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter an option: ";
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout<<"\nThank you!";
            break;

        default:
            cout<<"\nEnter a valid option";
            break;
        }
    }while(choice!=4);
    return 0;
}

void display(){
    cout<<"\nElements remaining:"<<endl;
    for (int i = 0; i <= tos; i++)
    {
        cout<<stack[i]<<endl ;
    }
}

void push(){
    if(tos>=(n-1)){
        cout<<"\nStack is full!"<<endl;
        return;
    }
    cout<<"\nEnter a number:";
    cin>>x;
    stack[++tos] = x;
    display();
}

void pop(){
    if(tos<0){
        cout<<"\nStack already clear!";
        return;
    }
    cout<<"\nElement popped! ("<<stack[tos--]<<")";
    display();
}
