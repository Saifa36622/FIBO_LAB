#ifndef LAB3_H
#define LAB3_H

#include <iostream>
using namespace std;

class wowzaa
{
    public:
        int value;
        wowzaa *next;
    
    wowzaa()
        {
            value = 0;
            next = NULL;

        }
    wowzaa(int newValue,wowzaa *newNext)
        {
            value = newValue;
            next = newNext;
        }
        int getva()
    {
        return value;
    }
    void setva(int newva)
    {
        value = newva;
    }
    wowzaa getter()
    {
        return *next;
    }
    void setter(wowzaa *newNext)
    {
        next = newNext;
    }
    void printList(wowzaa *node) 
    { 
    while (node != NULL) 
    { 
        cout<< node->value << " "; 
        node = node->next; 
    }
    }
};


#endif