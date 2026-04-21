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
        
        bool listEmpty()
        {
            return START == NULL;
        }   
        
        bool search(int nim, Node *&previous, Node *&current)
        {
            previous = START;
            current = START;

            while (current != NULL && current->noMhs != nim)
            {
                previous = current;
                current = current->next;
            }
            return current != NULL;
        }
        
        booldelNode(int nim)
        {
            Node *current, *previous;
            if (!search(nim, previous, current))
                return false;

                if (current == START)
                    START = START->next;
                else
                    previous->next = current->next;
                
                    delete current;
                
                    return true;
        }

        void traverse()
        {
            if (listEmpty())
                cout << "\nList Kosong\n";
            else
            {
                cout << "\nData di dalam list adalah: \n";
                Node *currentNode = START;
                
                while (currentNode != NULL)
                {
                    cout << currentNode->noMhs << endl;
                    currentNode = currentNode->next;
                }
                cout << endl;
            }
        }
                
             
        
    }
};