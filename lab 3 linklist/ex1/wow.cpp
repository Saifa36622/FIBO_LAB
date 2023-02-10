#include "wowzaa.h"

hi::hi(){
	value = 0;
	next = NULL;
}
hi::hi(int newValue, hi *newNext){
	value = newValue;
	next = newNext;
}
void hi::print()
{
    cout << "value = " << value << endl;
}
int hi::getValue()
{
    return value;
}
void hi::setValue(int newValue)
{
    value = newValue;
}
hi hi::get_next()
{
    return *next;
}
void hi::set_next(hi *new_next)
{
    next = new_next;
}

int main()
{
    hi wow = hi();
    hi zaa = hi(5,NULL);
    
    wow.setValue(10);
    zaa.setValue(20);
    int x = wow.getValue();
    int y = zaa.getValue();
    cout << "value of wow = " << x << " and value of zaa = " << y;

    cout << "\nand value of the next node for wow is ";
    wow.set_next(&zaa);
    hi temp = wow.get_next(); 
    temp.print();

}


