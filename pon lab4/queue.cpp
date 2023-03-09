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
    link::insert(newN,getsize());
}

int queue::dequeue(){
    link::remove(0);
}

Node *queue::peek(){
    return link::getHead();
}

int main(){
    int i = 0;
    int row[] = {5,6,8,9,2,7,1};
    queue queuerow2;
    queue queuerow3;
    while(i < (sizeof(row)/4)){
        if(row[i]%2==0){
            Node *nodequeue = new Node(row[i],NULL,NULL);
            queuerow2.enqueue(nodequeue);
        }
        else{
            Node *nodequeue1 = new Node(row[i],NULL,NULL);
            queuerow3.enqueue(nodequeue1);
        }
        
        // queuerow2.printList();
        i++;
        Node  *peek_row2 = queuerow2.peek();
        Node *peek_row3 = queuerow3.peek();
        if(peek_row2 == NULL || peek_row3 == NULL){
            continue;
        }
        if(peek_row2->getValue() > peek_row3->getValue()){
            Node *noderow2 = new Node (peek_row2->getValue(),NULL,NULL);
            queuerow2.dequeue();
            queuerow2.enqueue(noderow2);
        }
        else{
            Node *noderow3 = new Node(peek_row3->getValue(),NULL,NULL);
            queuerow3.dequeue();
            queuerow3.enqueue(noderow3);
        }
       
    }
    queuerow2.printList();
    cout << endl;
    queuerow3.printList();
    }