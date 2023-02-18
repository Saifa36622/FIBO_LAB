#include "wowzaa.h"

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
Node Node::get_next()
{
    return *next;
}
void Node::set_next(Node *new_next)
{
    next = new_next;
}

int main()
{
    Node wow = Node();
    Node zaa = Node(5,NULL);
    
    wow.setValue(10);
    zaa.setValue(20);
    int x = wow.getValue();
    int y = zaa.getValue();
    cout << "value of wow = " << x << " and value of zaa = " << y;

    cout << "\nand value of the next node for wow is ";
    wow.set_next(&zaa);
    Node temp = wow.get_next(); 
    temp.print();

}


