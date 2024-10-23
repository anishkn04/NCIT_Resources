#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    
}

void printArray(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {4,3,2,10,12,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: ";
    printArray(arr, n);
    insertionSort(arr, n);
    cout<<"\nAfter sorting: ";
    printArray(arr, n);
    return 0;
}