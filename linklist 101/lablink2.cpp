#include "link.h"

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
void insert2(Nodewowzaa **head,int new_data,int pos)
{
    Nodewowzaa *new_one = new Nodewowzaa();
    new_one->data = new_data; 
    new_one->next = NULL;
    int len = 1;
    Nodewowzaa *point = *head;
    if (pos != 0)
    {
        while (len < pos)
        {
         point = point->next;    
         len++;
        }
        //  if (len >= pos+1)
        // {
        //     cout << "hi";
        //     insert(head,new_data);
        //     return;
        // }
    }
    else if (pos == 0)
    {
        new_one->next = (*head);
        (*head) = new_one;
        return;
    }
    if (point->next == NULL)
    {
        point->next = new_one;
    }
    else
    {
        new_one->next = point->next;
        point->next = new_one;
    }

}
void printList(Nodewowzaa *node) 
{ 
    while (node != NULL) 
    { 
        cout<< node->data << " "; 
        node = node->next; 
    }
}

int main()
{
    Nodewowzaa *hi = NULL;
    insert(&hi,5);
    insert(&hi,6);
    insert(&hi,7);
    printList(hi);
    cout << "\n";
    insert2(&hi,9,0);
    printList(hi);
    cout << "\n";
    insert2(&hi,3,2);
    printList(hi);
    cout << "\n";
    insert2(&hi,1,5);
    printList(hi);
    cout << "\n";

}