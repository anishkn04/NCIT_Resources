#include <iostream>
using namespace std;
#define SIZE 10

void insertionatend(int *n, int arr[])
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    arr[*n] = data;
    *n = *n + 1;
}

void insertatpos(int *n, int arr[])
{
    int pos, i, data;
    cout << "Enter the position you want to insert: ";
    cin >> pos;
    cout << "Enter the data: ";
    cin >> data;
    for (i = *n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = data;
    *n = *n + 1;
}

void display(int arr[], int n)
{
    cout << "Data: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[SIZE], n;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data [" << i + 1 << "]: ";
        cin >> arr[i];
    }
    display(arr, n);
    insertionatend(&n, arr);
    display(arr, n);
    insertatpos(&n, arr);
    display(arr, n);
    return 0;
}