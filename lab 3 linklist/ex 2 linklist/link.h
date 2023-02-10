#ifndef LINK_H
#define LINK_H

#include <iostream>
using namespace std;
class hi
{
	private:
		int value;
		hi *next;
	public:
		hi();
		hi(int newValue, hi *newNext);
		void print();
		void setValue(int newValue);
		int getValue();
        hi *get_next();
        void set_next(hi *new_next);

}; 
class link
{
    private :
        hi *head;
        hi *tail;
        int size;
    public :
        link();
        link(hi *newnode1,hi *newnode2, int size);
        void insert(hi *newnode,int pos);
        void printList();
        hi *remove(int pos);
        
};

#endif