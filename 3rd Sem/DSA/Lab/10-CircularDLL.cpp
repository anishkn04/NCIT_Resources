#include <iostream>
using namespace std;
class DLL
{
    int data;
    DLL *prev, *next;

public:
    void addfrombeg(int item);
    void addfromend(int item);
    void delfrombeg();
    void delfromend();
    void display();
};
DLL *head = NULL;
DLL *tail = NULL;
void DLL::addfrombeg(int item)
{
    DLL *newnode = new DLL();
    newnode->data = item;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        newnode->next = head;
        tail->next = newnode;
        head = newnode;
    }
}
void DLL::display()
{
    DLL *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
void DLL::addfromend(int item)
{
    DLL *newnode = new DLL();
    newnode->data = item;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->prev = NULL;
        newnode->next = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }
}
void DLL::delfrombeg()
{
    DLL *temp = head;
    cout << "Deleted Element is " << temp->data << endl;
    head = head->next;
    head->prev = NULL;
    tail->next = head;
    delete temp;
}
void DLL::delfromend()
{
    DLL *temp = tail;
    cout << "Deleted Element is " << temp->data << endl;
    temp->prev->next = head;
    delete temp;
}
int main()
{
    DLL d;
    d.addfrombeg(4);
    d.addfrombeg(23);
    d.addfromend(5);
    d.addfromend(3);
    d.display();
    d.delfrombeg();
    d.display();
    d.delfromend();
    d.display();
    return 0;
}