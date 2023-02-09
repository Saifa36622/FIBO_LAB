#include "try.h"

void insert(Nodewowzaa2 **head,int datawow)
{
    Nodewowzaa2 *one = new Nodewowzaa2();
    one->data = datawow;
    one->next = NULL;
    Nodewowzaa2 *last = *head;
    if (*head == NULL)
    {
        *head = one;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = one;
    return;
}



// class person
// {
//     private:
//         string wow;
//         int attack;
//         int heatlh;
// };

// int main()
// {
//     person chokun;
//     chokun.wow = "hi";
//     chokun.attack = 10;
//     chokun.heatlh = 0;
//     cout << chokun.attack;
// }
