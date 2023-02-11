#include "link.h"
#include "util.cpp"

link::link()
{
    head = NULL;
    tail = NULL;
    size = 0;
    
}
link::link(hi *newnode1,hi *newnode2, int newsize)
{
    head = newnode1;
    tail = newnode2;
    size = newsize;
    head->set_next(tail);
    tail->set_next(NULL);
    head->setprev(NULL);
    tail->setprev(head);
}

void link::insert(hi *newnode, int pos)
{
    if (pos > size || pos < 0)
    {
        cout << "Error" << endl;
        return;
    }
    if (pos == 0)
    {
        newnode->set_next(head);
        newnode->setprev(NULL);
        head->setprev(newnode);
        head = newnode;
    }
    else if (pos == size)
    {
        newnode->setprev(tail);
        newnode->set_next(NULL);
        tail->set_next(newnode);
        tail = newnode;
    }
    else
    {
        hi *current = head;
        hi *previous = NULL;
        int len = 0;
        while (len < pos)
        {
            previous = current;
            current = current->get_next();
            len++;
        }
        newnode->set_next(current);
        newnode->setprev(previous);
        previous->set_next(newnode);
        current->setprev(newnode);
    }
    size++;
}
void link::printList() 
{ 
    hi *point = head;
    while (point != NULL)
    {
        cout << point->getValue() << endl;
        point = point->get_next();
    }
}
int main()
{
    hi node1 = hi(3,NULL,NULL);
    hi node2 = hi(5,NULL,NULL);
    link li(&node1,&node2,2);
    hi node3 = hi(7,NULL,NULL);
    li.printList();
    cout << "\n";
    li.insert(&node3,0);
    li.printList();
    cout << "\n";
    hi node4 = hi(9,NULL,NULL);
    li.insert(&node4,3);
    cout << "\n";
    li.printList();
}
