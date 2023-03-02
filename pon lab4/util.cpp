#include "link.h"

Node::Node(){
	value = 0;
	next = NULL;
    prev = NULL; // here
}
Node::Node(int newValue, Node *newNext,Node *newprev){
	value = newValue;
	next = newNext;
    prev = newprev;
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
// here
Node *Node::getprev()
{
    return prev;
}
void Node::setprev(Node *newprev)
{
    prev = newprev;
}