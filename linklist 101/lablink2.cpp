#include "link.h"

void insert(Nodewowzaa **head,int new_data)
{
    int x = 10;
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

void insert_with_position(Nodewowzaa **head,int new_data,int pos)
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
void del(Nodewowzaa **head,int pos)
{
    int len = 0;
    Nodewowzaa *point = *head;
    Nodewowzaa *point2 = NULL;
    while (len < pos-1)
    {
        point = point->next;    
        len++;
    }
    point2 = point->next;
    point2 = point2->next;
    point->next = point2;
}

int main()
{
    Nodewowzaa *hi = NULL;
    cout << "add 5 6 7 : ";
    insert(&hi,5);
    insert(&hi,6);
    insert(&hi,7);
    printList(hi);
    cout << "\nadd 9 at 0 index : ";
    insert_with_position(&hi,9,0);
    printList(hi);
    cout << "\nadd 3 at 2 index : ";
    insert_with_position(&hi,3,2);
    printList(hi);
    cout << "\nadd 1 at 5 index : ";
    insert_with_position(&hi,1,5);
    printList(hi);
    cout << "\ndelete the second index : ";
    del(&hi,2);
    printList(hi);
}