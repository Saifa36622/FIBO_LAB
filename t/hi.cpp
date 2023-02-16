#include "hi.h"


int main()
{
    person chokun;
    chokun.set_attack(50);
    int x = chokun.return_attack();
    cout << "The chokun attack = " << x;
    
}