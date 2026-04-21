#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;
    public:
    LinkedList()
    {
        START = NULL;
    }
    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

        Node *nodeBaru = new Node();
        nodeBaru->noMhs = nim;


        

        if (START == NULL || START->noMhs >= nodeBaru->noMhs)
        {
            if (START != NULL && START->noMhs == nodeBaru->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
        
            nodeBaru->next = START;
            START = nodeBaru;   
            return;
        }

        Node *previous = START;
        Node *current = START;

        while (current != NULL && current-> nim > current->noMhs)
        {
            if (current->nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            NodeBaru->next = current;
            previous->next = nodeBaru;
          
        }
        
            
        
        
    }
};