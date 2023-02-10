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
        head = newnode;
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
        previous->set_next(newnode);
    }
    size++;
}
hi *link::remove(int pos)
{
    if (pos >= size || pos < 0)
    {
        cout << "Error" << endl;
        return NULL;
    }
    hi *current = head;
    if (pos == 0)
    {
        hi *removenode = new hi(head->getValue(), head->get_next());
        head = head->get_next();
        size--;
        if (size == 0)
        {
            tail = NULL;
        }
        return removenode;
    }
    else
    {
        int len = 0;
        while (len < pos -1)
        {
            current = current->get_next();
            len++;
        }
        hi *removenode = new hi(current->get_next()->getValue(), current->get_next()->get_next());
        current->set_next(current->get_next()->get_next());
        size--;
        if (pos == size)
        {
            tail = current;
        }
        return removenode;
    }
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
    link li(&node1,&node2,4);
    hi node3 = hi(7,NULL,NULL);
    li.printList();
    cout << "\n";
    li.insert(&node3,2);
    li.printList();
    cout << "\n";
    hi *x  = li.remove(1);
    cout << x->getValue();
    cout << "\n\n";
    li.printList();
    hi node4 = hi(9,NULL,NULL);
    li.insert(&node4,2);
    cout << "\nhi";
    li.printList();


    hi node4 = hi(5,NULL,NULL);
}
