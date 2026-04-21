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
        cout << "/nMasukkan Nomor Mahasiswa : ";
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
        
            
        
        cout << endl;
    }
};