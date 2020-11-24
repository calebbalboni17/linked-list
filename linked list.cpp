
#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* next = nullptr;


};
class nodes
{
private:
   
    node* start = nullptr;
    node* temp = NULL;
    node* all = NULL;

public:

    void add_to_end(int end)
    {
        node* all = new node;
        all->data = end;
        if (start == nullptr)
        {
            temp = all;
            start = all;
            cout << "added " << start->data << " to the start" << endl;
        }
        else
        {
            node* all = new node;
            temp->next = all;
            temp = all;
            temp->data = end;
            cout << "added " << temp->data << " to the end"<< endl;

        }

    }
    void print()
    {
        cout << "printing...  " << endl;
        node* all = start;
        while (all != nullptr)
        {

            cout << "this is the value:  " << all->data << endl;
            all = all->next;
        }


    }

    void add_to_beginning(int x) //fix
    
    {
        node* all = new node;
        all->data = x;
        if (start == nullptr)
        {
            temp = all;
            start = all;
            cout << "adding " << all->data << " to the beginning" << endl;
        }
        else
        {
            temp = all;
            temp->next = start;
            cout << "added " << all->data << " to the beginning" << endl;
        }
    }





};



int main()
{
    nodes all;
    
    all.add_to_end(6);
    all.add_to_end(5);
    all.add_to_end(5);
    all.add_to_beginning(4);
    all.add_to_end(5);
    all.print();
}


