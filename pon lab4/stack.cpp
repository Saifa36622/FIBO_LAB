#include "stack.h"
#include "link.h"
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
    int i = 0;
    int pon[] = {1,2,3,0,4,5};
    stack stackpon;
    while(i<(sizeof(pon)/4)){
        Node *nodepon = new Node(pon[i],NULL,NULL);
        if (pon[i]== 0 && i != 0){
            int intpon = stackpon.pop();
            Node* nodeponpon = new Node(intpon,NULL,NULL);
            stackpon.push(nodepon);
            stackpon.push(nodeponpon);
        }
        else {
            stackpon.push(nodepon);
        }
        i++;
    }

    stackpon.printList();

}

