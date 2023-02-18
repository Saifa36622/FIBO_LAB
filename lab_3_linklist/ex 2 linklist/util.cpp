#include "link.h"

Node::Node(){
	value = 0;
	next = NULL;
}
Node::Node(int newValue, Node *newNext){
	value = newValue;
	next = newNext;
}
void Node::print()
{
    cout << "value = " << value << endl;
}
int Node::getValue()
{
    return value;
}
void Node::setValue(int newValue)
{
    value = newValue;
}
Node *Node::get_next()
{
    return next;
}
void Node::set_next(Node *new_next)
{
    next = new_next;
}