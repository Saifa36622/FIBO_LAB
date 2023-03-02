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
    head->setprev(NULL);
    tail->setprev(head);
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
        newnode->setprev(NULL);
        head->setprev(newnode);
        head = newnode;
    }
    else if (pos == 0 && head == NULL)
    {
        head = newnode;
        tail = newnode;
        head->setprev(NULL);
        head->set_next(NULL);
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
        Node *current = head;
        Node *previous = NULL;
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
    return;
}
Node *link::remove(int pos)
{
    if (pos < 0)
    {
        pos = size + pos;
    }
    if (pos > size )
    {
        cout << "Error" << endl;
        return NULL;
    }
    
    Node *removedNode = NULL;
    
    if (pos == 0 && head != NULL && size != 1)
    {
        removedNode = head;
        head = head->get_next();
        head->setprev(NULL);
        removedNode->set_next(NULL);
    }
    else if (pos == 0 && size == 1)
    {
        removedNode = head;
        head = NULL;
    }
    else if (pos == size - 1)
    {
        removedNode = tail;
        tail = tail->getprev();
        tail->set_next(NULL);
        removedNode->setprev(NULL);
    }
    else
    {
        Node *current = head;
        Node *previous = NULL;
        int len = 0;
        while (len < pos)
        {
            previous = current;
            current = current->get_next();
            len++;
        }
        removedNode = current;
        previous->set_next(current->get_next());
        current->get_next()->setprev(previous);
        removedNode->set_next(NULL);
        removedNode->setprev(NULL);
    }
    size--;
    return removedNode;
}
void link::printList() 
{ 
    Node *point = head;
    while (point != NULL)
    {
        cout << point->getValue() << endl;
        point = point->get_next();
    }
}

Node *link::getHead(){
    return head;
}
Node *link::getTail(){
    return tail;
}
int link::getsize(){
    return size;
}

















// int main()
// {
//     Node node1 = Node(1,NULL,NULL);
//     Node node2 = Node(2,NULL,NULL);
//     Node node3 = Node(3,NULL,NULL);
    // Node node4 = Node(4,NULL,NULL);

    // link hi;
    // hi.insert(&node1,0);
    // hi.insert(&node2,0);
    // hi.insert(&node3,2);
    // hi.insert(&node4,1);
    // hi.printList();

    // cout <<"\n";
    // hi.remove(0);
    // hi.printList();

    // cout << "\n" << node4.getprev();
    // Node node1 = Node(3,NULL,NULL);
    // Node node2 = Node(5,NULL,NULL);
    // link li(&node1,&node2,2);
    // Node node3 = Node(7,NULL,NULL);
    // li.printList();
    // cout << "\n";
    // li.insert(&node3,0);
    // li.printList();
    // cout << "\n";
    // Node node4 = Node(9,NULL,NULL);
    // li.insert(&node4,3);
    // cout << "\n";
    // li.printList();
    // li.remove(1);
    // cout << "\n";
    // li.printList();
    
//     link li2;
//     li2.insert(&node1,0);
//     cout << "\n";
//     li2.printList();
//     li2.insert(&node2,1);
//     li2.insert(&node3,2);
//     cout << "\n";
//     li2.printList();

//     li2.remove(-2);
//     cout << "\n";
//     li2.printList();
// }