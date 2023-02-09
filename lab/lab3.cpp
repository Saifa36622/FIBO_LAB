#include "lab3.h"

int main()
{
    wowzaa *hi = new wowzaa(10,NULL);
    wowzaa *hello = new wowzaa(20,hi);
    wowzaa *head = hello;
    while (head != NULL)
    {
        cout << head->value<<endl;
        head = head->next;
    }
    cout << "\n";
    hi->setter(hello);
    hello->setter(NULL);
    
    wowzaa *last = hi;

    while (last != NULL)
    {
        cout << last->value<<endl;
        last = last->next;
    }


}