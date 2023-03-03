#ifndef QUEUE_H
#define QUEUE_H

#include "link.h"
using namespace std;

class queue: public link{
    public:
        queue();
        ~queue();
        void enqueue(Node *newN);
        int dequeue();
        Node *peek();
};

#endif
