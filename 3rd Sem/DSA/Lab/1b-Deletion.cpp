#include <iostream>
using namespace std;

int main(){
    int array[10] = {1, 2, 3, 4, 5 };
    int index;
    cout<<"Enter the index to delete the number: "; cin>>index;
    for (int i = index; i < 10; i++)
    {
        array[i] = array[i+1];
        if (i==9)
        {
            array[i] = 0;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}