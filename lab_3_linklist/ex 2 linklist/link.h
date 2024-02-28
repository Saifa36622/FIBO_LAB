#ifndef LINK_H
#define LINK_H

#include <iostream>
using namespace std;

class Node
{
	private:
		int value;
		Node *next;
	public:
		Node();
		Node(int newValue, Node *newNext);
		void print();
		void setValue(int newValue);
		int getValue();
        Node *get_next();
        void set_next(Node *new_next);

}; 
class link
{
    private :
        Node *head;
        Node *tail;
        int size;
    public :
        link();
        link(Node *newnode1,Node *newnode2, int size);
        void insert(Node *newnode,int pos);
        void printList();
        Node *remove(int pos);
        
};


#endif