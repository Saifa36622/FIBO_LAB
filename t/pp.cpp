#include "pp.h"

Node::Node()
{
    value = 0;
    next = NULL;
}
Node::Node(int newval,Node *newnext)
{
    value = newval;
    next = newnext;
}


int main()
{
    // Node *pp = new Node();
    // Node *pp2 = new Node(5,NULL);
}
