#include <iostream>
using namespace std;
#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

int secondHash(int key)
{
    return 7 - key % 7;
}

void initHashTable()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

void insert(int key)
{
    int index = hashFunction(key);
    int step = secondHash(key);
    while (hashTable[index] != -1)
    {
        index += step;
        index %= TABLE_SIZE;
    }
    hashTable[index] = key;
}

int search(int key)
{
    int index = hashFunction(key);
    int step = secondHash(key);
    while (hashTable[index] != key)
    {
        index += step;
        index %= TABLE_SIZE;
        if (hashTable[index] == -1)
        {
            return -1;
        }
    }
    return index;
}

int main()
{
    initHashTable();
    insert(21);
    insert(25);
    insert(33);
    insert(35);
    int key;
    cout << "Enter key to search: ";
    cin >> key;
    int index = search(key);
    if (index == -1)
    {
        cout << "Key not found";
    }
    else
    {
        cout << "Key found at index: " << index;
    }
    return 0;
}