#ifndef WOWZAA_H
#define WOWZAA_H

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
#endif