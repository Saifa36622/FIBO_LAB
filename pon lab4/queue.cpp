#include "queue.h"
#include "link.h"
#include <iostream>
using namespace std;

void queue::enqueue(Node *newN){
    link::insert(newN,getsize()-1);
}

int queue::dequeue(){
    link::remove(0);
}

int queue::peek(){
    return link::getHead()->getValue();
}

int main(){
    
}