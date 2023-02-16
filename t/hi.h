#ifndef HI_H
#define HI_H

#include <iostream>
using namespace std;

class person 
{
        int attack;
        int heatlh;
        string speak;
        public :
            void set_attack(int newattack)
            {
                attack = newattack;
            }
            int return_attack()
            {
                return attack;
            }
};

#endif