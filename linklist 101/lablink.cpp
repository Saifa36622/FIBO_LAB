#include "link.h"

void Linkedlist::append(Nodewowzaa *new_one, int pos)
{
    *Linkedlist::tail = *Linkedlist::head;
    int i = 0;
    while (i <= pos)
    {
        Linkedlist::tail = Linkedlist::tail->next;
        i++;
    }
    *Linkedlist::tail = *new_one;
}

void printList(Nodewowzaa *node) 
{ 
    while (node != NULL) 
    { 
        cout<< node->data << " "; 
        node = node->next; 
    } 
} 
void insert(Nodewowzaa **head,int new_data)
{
    Nodewowzaa *new_one = new Nodewowzaa(); 
    new_one->data = new_data; 
    new_one->next = NULL; 
    Nodewowzaa *last = *head; 
    if (*head == NULL)
    {
        *head = new_one;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
   
    last->next = new_one; 
    return; 

}
int main()
{
    // Nodewowzaa *hello = NULL;
    // insert(&hello,5);
    // insert(&hello,6);
    // insert(&hello,7);
    // printList(hello);
    Linkedlist Linkedlist;
    Nodewowzaa *lol = new Nodewowzaa();
    lol->data = 2;

    Linkedlist.append(lol,0);
    Linkedlist.append(lol,1);
    cout << "hi";

    

}