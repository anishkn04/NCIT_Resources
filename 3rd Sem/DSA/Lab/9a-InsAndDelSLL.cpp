#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;
void insertAtBeginning(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
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
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}
void insertatpos(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    int pos, i = 1;
    cout << "Enter the position you want to insert: ";
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
    newNode->next = current->next;
    current->next = newNode;
}
void Deleteatbeginning()
{
    Node *temp;
    temp = head;
    head = head->next;
    delete temp;
}
void Deleteatend()
{
    Node *temp = head;
    Node *prevnode;
    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (head == temp)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }
    delete temp;
}
void Deleteatpos()
{
    int pos, i = 1;
    cout << "Enter a position you want to delete: ";
    cin >> pos;
    Node *temp, *nextnode;
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
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
    displayList();
    insertAtEnd(20);
    displayList();
    insertAtEnd(30);
    displayList();
    insertAtBeginning(5);
    displayList();
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