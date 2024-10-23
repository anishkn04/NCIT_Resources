#include <iostream>
using namespace std;

int main(){
    int array[10] = {1, 2, 3, 4, 5 };
    int numToInsert, index;
    cout<<"Enter a number to insert in array: "; cin>>numToInsert;
    cout<<"Enter the index to insert the number: "; cin>>index;
    for (int i = 9; i >= index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = numToInsert;
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}