
#include <iostream>
#define max 5
using namespace std;

void enqueue(int Queue[max], int &front, int &rear, int &value)
{
    if (front == max - 1)
    {
        cout << "Queue is full!";
        return;
    }
    if (rear == -1 && front == -1)
    {
        front++;
    }
    Queue[++rear] = value;
}

int dequeue(int Queue[max], int &front, int &rear)
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty!";
    }
int item = Queue[front};
    if (rear == front)
    {
        rear = -1;
        front = -1;
        return item;
    }
front++;
    return item;
}
/// - - - 4
// Enqueue with pointers if needed
// void penqueue(int Queue[max], int *front, int *rear, int *value)
// {
//     if (*front == max - 1)
//     {
//         cout << "Queue is full!";
//         return;
//     }
//     if (*rear == -1 && *front == -1)
//     {
//         (*front)++;
//     }
//     Queue[++(*rear)] = *value;
// }

void display(int Queue[max], int &front, int &rear)
{
    if (rear == -1 || front == -1)
    {
        cout << "No data!";
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int Queue[max];
    int rear = -1, front = -1;
    int data = 5;
    enqueue(Queue, front, rear, data);
    enqueue(Queue, front, rear, data = 8);
    display(Queue, front, rear);
    cout << dequeue(Queue, front, rear)<<endl;
    cout << dequeue(Queue, front, rear)<<endl;
    // penqueue(Queue, &front, &rear, &data); Enqueue with pointers
    display(Queue, front, rear);

    return 0;
}
