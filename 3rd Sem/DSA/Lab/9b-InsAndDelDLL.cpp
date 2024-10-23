#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *tail = NULL;
void insertAtBeginning(int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;
}
void insertAtEnd(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertatpos(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    int pos, i = 1;
    cout << "Enter the position you want to insert";
    cin >> pos;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while (i < pos - 1)
    {
        current = current->next;
        i++;
    }
    current->next->prev = newNode;
    newNode->next = current->next;
    newNode->prev = current;
    current->next = newNode;
}
void Deleteatbeginning()
{
    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    Node *temp;
    temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}
void Deleteatend()
{
    Node *temp = tail;
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail = tail->prev;
        tail->next = NULL;
    }
    delete temp;
}
void Deleteatpos()
{
    int pos, i = 1;
    cout << "Enter a position you want to delete";
    cin >> pos;
    Node *temp, *nextnode;
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    nextnode->next->prev = temp;
    temp->next = nextnode->next;
    delete nextnode;
}
void displayList()
{
    if (head == NULL)
    {
        std::cout << "The list is empty." << std::endl;
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
int main()
{
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtBeginning(5);
    insertatpos(3);
    displayList();
    Deleteatbeginning();
    displayList();
    Deleteatend();
    displayList();
    Deleteatpos();
    displayList();
    return 0;
}