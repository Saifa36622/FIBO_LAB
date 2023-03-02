#ifndef STACK_H
#define STACK_H

#include "link.h"
using namespace std;

class stack: public link{
    public:
        stack();
        ~stack();
        void push(Node *newN);
        int pop();
        int peek();
};



#endif