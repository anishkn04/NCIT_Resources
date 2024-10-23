#include <iostream>
using namespace std;
#define MAX 10

void create();
void insert();
void deletion();
void search();
void display();

int a, b[20], n, p, e, f, i, pos;

int main()
{
    int ch;
    char g = 'Y';

    do
    {
        cout << "\nMain menu";
        cout << "\n1. Create \n2. Delete \n3. Search \n4. Insert \n5. Display \n6. Exit \n";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "\nEnter the correct choice ";
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> g;
    } while (g == 'y' || g == 'Y');
}

void create()
{
    cout << "\nEnter the number of nodes: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the element: ";
        cin >> b[i];
    }
}

void deletion()
{
    cout << "\nEnter the position you want to delete: ";
    cin >> pos;

    if (pos >= n)
    {
        cout << "\nInvalid location";
    }
    else
    {
        for (i = pos + 1; i < n; i++)
        {
            b[i - 1] = b[i];
        }
        n--;
    }

    cout << "\nThe elements after deletion: ";
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}

void search()
{
    cout << "\nEnter the element to be searched: ";
    cin >> e;

    for (i = 0; i < n; i++)
    {
        if (b[i] == e)
        {
            cout << "Value is in the " << i << " position";
            return;
        }
    }

    cout << "Value " << e << " is not in the list";
}

void insert()
{
    cout << "\nEnter the position you need to insert: ";
    cin >> pos;

    if (pos >= n)
    {
        cout << "\nInvalid location";
    }
    else
    {
        for (i = MAX - 1; i >= pos - 1; i--)
        {
            b[i + 1] = b[i];
        }

        cout << "\nEnter the element to insert: ";
        cin >> p;

        b[pos] = p;
        n++;
    }

    cout << "\nThe list after insertion: ";
    display();
}

void display()
{
    cout << "\nThe elements of the list ADT are: ";
    for (i = 0; i < n; i++)
    {
        cout << "\n" << b[i];
    }
}