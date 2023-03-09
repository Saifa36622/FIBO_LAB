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

Node *stack::peek(){
    return link::getHead();
}

int main(){
    // Node node1 = Node(1,NULL,NULL);
    // Node node2 = Node(2,NULL,NULL);
    // Node node3 = Node(3,NULL,NULL);
    // Node node4 = Node(4,NULL,NULL);

    // stack hi;

    // hi.push(&node1);
    // hi.push(&node2);
    // hi.push(&node3);
    // hi.push(&node4);

    // hi.printList();
    // cout <<"peek : " <<  hi.peek()->getValue() << endl;

    // cout <<"remove : "<< hi.pop() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.pop() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.pop() << endl;
    // cout << "remain : " << endl;
    // hi.printList();
    // cout <<"remove : "<< hi.pop() << endl;
    // cout << "remain : " << endl;
    // hi.printList();


    // postlab
    int a[] = {0,2,3,0,4,5};
    int size =sizeof(a)/4;
    stack hi;
    for (int i = 0;i < size;i++)
    {
        Node *temp = new Node(a[i],NULL,NULL);
        if (a[i] == 0 && i != 0)
        {
            Node *temp2 = new Node(a[i-1],NULL,NULL);
            hi.pop();
            hi.push(temp); 
            hi.push(temp2);
                       
        }
        else
        {
            hi.push(temp);
        }
    }
    hi.printList();

}

