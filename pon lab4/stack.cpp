#include "stack.h"
#include "link.h"
#include <iostream>
using namespace std;

void stack::push(Node *newN){
    link::insert(newN,0);
}

int stack::pop(){
    link::remove(0);
}

int stack::peek(){
    return link::getHead()->getValue();
}

int main(){
    
}

