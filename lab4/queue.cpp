#include "queue.h"
#include "link.h"
#include"s_to_d_link.cpp"
#include <iostream>
using namespace std;

queue::queue()
{

}

queue::~queue()
{

}

void queue::enqueue(Node *newN){
    link::insert(newN,link::getsize());
}

int queue::dequeue(){
    return link::remove(0)->getValue();
}

Node *queue::peek(){
    return link::getHead();
}

int main(){
    // Node node1 = Node(1,NULL,NULL);
    // Node node2 = Node(2,NULL,NULL);
    // Node node3 = Node(3,NULL,NULL);
    // Node node4 = Node(4,NULL,NULL);

    // queue hi;

    // hi.enqueue(&node1);
    // hi.enqueue(&node2);
    // hi.enqueue(&node3);
    // hi.enqueue(&node4);

    // hi.printList();
    // cout <<"peek : " << hi.peek()->getValue() << endl;
    // cout <<"remove : "<< hi.dequeue() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.dequeue() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.dequeue() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.dequeue() << endl;
    // cout << "remain : " << endl;
    // hi.printList();

    // postlab
    int a[] = {5,6,8,9,2,7,1};
    int size = sizeof(a)/4;
    queue row2;
    queue row3;
    for (int i = 0;i < size;i++)
    {
        if (a[i] % 2 == 0)
        {
            Node *temp = new Node(a[i],NULL,NULL);
            row2.enqueue(temp);
        }
        else 
        {
            Node *temp2 = new Node(a[i],NULL,NULL);
            row3.enqueue(temp2);
        }
        Node *peek_row2 = row2.peek();
        Node *peek_row3 = row3.peek();
        if (peek_row2 == NULL || peek_row3 == NULL)
        {
            continue;
        }
        int val_rol2 = row2.peek()->getValue();
        int val_rol3 = row3.peek()->getValue();
        
        if (val_rol2 > val_rol3)
        {
            Node *te = new Node(val_rol2,NULL,NULL);
            row2.dequeue();
            row2.enqueue(te);
        }
        else if (val_rol2 < val_rol3)
        {
            Node *te2 = new Node(val_rol3,NULL,NULL);
            row3.dequeue();
            row3.enqueue(te2);
        }
    }
    cout << "row 2 : " << endl;
    row2.printList();
    cout << endl;
    cout << "row 3 : " << endl;
    row3.printList();

}