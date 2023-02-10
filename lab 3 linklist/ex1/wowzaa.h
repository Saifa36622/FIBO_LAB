#ifndef WOWZAA_H
#define WOWZAA_H

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
        hi get_next();
        void set_next(hi *new_next);

}; 
#endif