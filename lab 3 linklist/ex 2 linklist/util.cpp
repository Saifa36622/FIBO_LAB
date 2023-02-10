#include "link.h"

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
hi *hi::get_next()
{
    return next;
}
void hi::set_next(hi *new_next)
{
    next = new_next;
}