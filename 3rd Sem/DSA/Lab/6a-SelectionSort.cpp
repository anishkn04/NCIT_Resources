#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size){
    int i;
    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr[] = {5,2,4,3,6,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore sorting: ";
    printArray(arr, size);
    selectionSort(arr, size);
    cout<<"\nAfter Sort: ";
    printArray(arr, size);
    return 0;
}