#ifndef LINK_H
#define LINK_H

#include <iostream>
using namespace std;

class Nodewowzaa 
{ 
    public:
    int data; 
    Nodewowzaa *next; 
};

class Linkedlist
{
    Nodewowzaa *head;
    Nodewowzaa *tail;
    int size;
    public :
    void append(Nodewowzaa *new_one, int pos);
};

#endif
