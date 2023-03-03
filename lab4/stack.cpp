#include "stack.h"
#include "link.h"
// #include "util.cpp"
#include"s_to_d_link.cpp"
#include <iostream>
using namespace std;

stack::stack()
{

}
stack::~stack()
{

}

void stack::push(Node *newN){
    link::insert(newN,0);
}

int stack::pop(){
    return link::remove(0)->getValue();
}

int stack::peek(){
    return link::getHead()->getValue();
}

int main(){
    Node node1 = Node(1,NULL,NULL);
    Node node2 = Node(2,NULL,NULL);
    Node node3 = Node(3,NULL,NULL);
    Node node4 = Node(4,NULL,NULL);

    stack hi;

    hi.push(&node1);
    hi.push(&node2);
    hi.push(&node3);
    hi.push(&node4);

    cout <<"peek : " <<  hi.peek() << endl;

    cout <<"remove : "<< hi.pop() << endl;
    cout << "remain : " << endl;
    hi.printList();
    cout <<"remove : "<< hi.pop() << endl;
    cout << "remain : " << endl;
    hi.printList();
    cout <<"remove : "<< hi.pop() << endl;
    cout << "remain : " << endl;
    hi.printList();
    cout <<"remove : "<< hi.pop() << endl;
    cout << "remain : " << endl;
    hi.printList();
}

