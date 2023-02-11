#ifndef LINK_H
#define LINK_H

#include <iostream>
using namespace std;
class hi
{
	private:
		int value;
		hi *next;
        hi *prev; // here
	public:
		hi();
		hi(int newValue, hi *newNext,hi *newprev);
		void print();
		void setValue(int newValue);
		int getValue();
        hi *get_next();
        void set_next(hi *new_next);
        hi *getprev();
        void setprev(hi *newprev);

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