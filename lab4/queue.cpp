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

int queue::peek(){
    return link::getHead()->getValue();
}

int main(){
    Node node1 = Node(1,NULL,NULL);
    Node node2 = Node(2,NULL,NULL);

    queue hi;

    hi.enqueue(&node1);
    hi.enqueue(&node2);

    hi.printList();
    cout <<"peek : " << hi.peek() << endl;
    cout <<"remove : "<< hi.dequeue() << endl;
    cout << "remain : ";
    hi.printList();
    cout <<"remove : "<< hi.dequeue() << endl;
    cout << "remain : ";
    hi.printList();

}