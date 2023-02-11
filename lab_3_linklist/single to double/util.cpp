#include "link.h"

hi::hi(){
	value = 0;
	next = NULL;
    prev = NULL; // here
}
hi::hi(int newValue, hi *newNext,hi *newprev){
	value = newValue;
	next = newNext;
    prev = newprev;
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
// here
hi *hi::getprev()
{
    return prev;
}
void hi::setprev(hi *newprev)
{
    prev = newprev;
}