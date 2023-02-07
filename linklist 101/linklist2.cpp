#include <iostream>
using namespace std;

class Nodewowzaa 
{ 
    public:
    int data; 
    Nodewowzaa *next; 
};

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
    Nodewowzaa *new_one = new Nodewowzaa(); // creat new node by use Nodewowzaa class
    Nodewowzaa *last = *head; // let the last link be the head
    new_one->data = new_data; // insert data to newnode call newone 
    new_one->next = NULL; // let the new one point to null
    if (*head == NULL)
    {
        *head = new_one;
        return;
    }
    // if it empty (head == null) , let the new one be the head
    while (last->next != NULL)
    {
        last = last->next;
    }
    // if the last one not point to null go to next last to find the real last that point to null
    last->next = new_one; 
    // after you find the real last 
    //insert new_one after the real last 
    return; 

}
//append to head node
void change(Nodewowzaa **head,int data_for_new_node)
{
    Nodewowzaa *new_head = new Nodewowzaa(); // creat new node by use Nodewowzaa class
    new_head->data = data_for_new_node;// insert data to new head call newone 
    new_head->next = (*head);// new head point to old head
    (*head) = new_head; // assign hew head to head
}

int main()
{
    Nodewowzaa *hi = NULL;
    insert(&hi,5);
    insert(&hi,6);
    insert(&hi,7);
    printList(hi);

    cout << "\n";
    
    change(&hi,8);
    printList(hi);

}