#include <iostream>
using namespace std;
#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

void initHashTable()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);
    int i = 0;
    while (hashTable[index] != -1)
    {
        i++;
        index = (hashFunction(key) + i * i) % TABLE_SIZE;
    }
    hashTable[index] = key;
}

int search(int key)
{
    int index = hashFunction(key);
    int i = 0;
    while (hashTable[index] != key)
    {
        i++;
        index = (hashFunction(key) + i * i) % TABLE_SIZE;
        if (hashTable[index] == -1)
            return -1;
    }
    return index;
}

int main()
{
    initHashTable();
    int number;
    insert(21);
    insert(25);
    insert(33);
    insert(35);
    cout << "Enter the number you want to search:" << endl;
    cin >> number;
    int index = search(number);
    if (index == -1)
    {
        cout << "Key not found\n";
    }
    else
    {
        cout << "Key found at index: " << index << "\n";
    }
}