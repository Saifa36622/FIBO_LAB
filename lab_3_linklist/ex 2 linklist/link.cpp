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
        // for (int i = 0; i < pos; i++)
        // {
        //     previous = current;
        //     current = current->get_next();
        // }
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
        // for (int i = 0; i < pos - 1; i++)
        // {
        //     current = current->get_next();
        // }
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
        // hi tp = *(point->get_next());
        // point = &tp;
        point = point->get_next();
    }
}
int main()
{
    hi node1 = hi(3,NULL);
    hi node2 = hi(5,NULL);
    link li(&node1,&node2,2);
    hi node3 = hi(7,NULL);
    li.printList();
    cout << "\n";
    li.insert(&node3,2);
    li.printList();
    cout << "\n";
    hi *x  = li.remove(1);
    cout << x->getValue();
    cout << "\n\n";
    li.printList();
    hi node4 = hi(9,NULL);
    li.insert(&node4,2);
    cout << "\n";
    li.printList();
}

// trash
// void link::insert(hi *newnode, int pos)
// {
//     if (pos > size || pos < 0)
//     {
//         cout << "Error: position out of bounds." << endl;
//         return;
//     }
//     if (pos == 0)
//     {
//         newnode->set_next(head);
//         head = newnode;
//     }
//     else
//     {
//         hi *current = head;
//         for (int i = 0; i < pos - 1; i++)
//         {
//             hi tp = *(current->get_next());
//             current = &tp;
//         }
        
//         hi tp2 = *(current->get_next());
//         if (current->get_next() == nullptr)
//         {
//             current->set_next(newnode);
//             newnode->set_next(NULL);
//         }
//         newnode->set_next(&tp2);
//         current->set_next(newnode);
//         // hi *tmp = &tp2;
//         // if (tmp == NULL)
//         // {
//         //     current->set_next(newnode);
//         //     newnode->set_next(NULL);
//         // }
//         // else 
//         // {
            
//         // }
        
//     }
//     size++;
// }