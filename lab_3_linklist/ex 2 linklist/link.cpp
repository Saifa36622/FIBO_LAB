#include "link.h"
#include "util.cpp"

link::link()
{
    head = NULL;
    tail = NULL;
    size = 0;
    
}
link::link(Node *newnode1,Node *newnode2, int newsize)
{
    head = newnode1;
    tail = newnode2;
    size = newsize;
    head->set_next(tail);
    tail->set_next(NULL);
}

void link::insert(Node *newnode, int pos)
{
    if (pos > size || pos < 0)
    {
        cout << "Error" << endl;
        return;
    }
    if (pos == 0 && head != NULL)
    {
        newnode->set_next(head);
        head = newnode;
    }
    else if (pos == 0 && head == NULL)
    {
        newnode->set_next(head);
        head = newnode;
    }
    else
    {
        Node *current = head;
        Node *previous = NULL;
        // for (int i = 0; i < pos; i++)
        // {
        //     previous = current;
        //     current = current->get_next();
        // }
        int len = 0;
        while(len < pos)
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
Node *link::remove(int pos)
{
    if (pos >= size || pos < 0)
    {
        cout << "Error" << endl;
        return NULL;
    }
    Node *current = head;
    if (pos == 0)
    {
        Node *removenode = new Node(head->getValue(), head->get_next());
        Node *temp20 = head;
        head = head->get_next();
        temp20->set_next(NULL);
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
        while(len < pos - 1)
        {
            current = current->get_next();
            len++;
        }
        // for (int i = 0; i < pos - 1; i++)
        // {
        //     current = current->get_next();
        // }
        Node *removenode = new Node(current->get_next()->getValue(), current->get_next()->get_next());
        Node *current3 = current->get_next();
        // Node *current2 = current;
        // current->set_next(NULL);
        current->set_next(current->get_next()->get_next());
        current3->set_next(NULL);
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
    Node *point = head;
    while (point != NULL)
    {
        cout << point->getValue() << endl;
        // Node tp = *(point->get_next());
        // point = &tp;
        point = point->get_next();
    }
}
int main()
{
    Node node1 = Node(3,NULL);
    Node node2 = Node(5,NULL);
    link li(&node1,&node2,2);
    Node node3 = Node(7,NULL);
    cout << "1.should be 3 5 : \n\n";
    li.printList();
    cout << "\n";
    li.insert(&node3,2);
    cout << "2.should be 3 5 7: \n\n";
    li.printList();
    cout << "\n";
    Node *x  = li.remove(1);
    cout << "3.should be 5 : \n\n";
    cout << x->getValue();
    cout << "\n\n";
    cout << "4.should be 3 7 : \n\n";
    li.printList();
    Node node4 = Node(9,NULL);
    li.insert(&node4,2);
    cout << "\n";
    cout << "5.should be 3 7 9 : \n\n";
    li.printList();

    link test;
    test.insert(&node1,0);
    test.insert(&node2,1);
    cout << "\n";
    cout << "6.should be 3 5 : \n\n";
    test.printList();
}

// trash
// void link::insert(Node *newnode, int pos)
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
//         Node *current = head;
//         for (int i = 0; i < pos - 1; i++)
//         {
//             Node tp = *(current->get_next());
//             current = &tp;
//         }
        
//         Node tp2 = *(current->get_next());
//         if (current->get_next() == nullptr)
//         {
//             current->set_next(newnode);
//             newnode->set_next(NULL);
//         }
//         newnode->set_next(&tp2);
//         current->set_next(newnode);
//         // Node *tmp = &tp2;
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