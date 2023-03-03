#ifndef PP_H
#define PP_H

#include <iostream>
using namespace std;

// class person
// {
//     private:
//         int heath;
//         string Nickname;
//     public :
//         void set_heath(int newhea);
//         int get_heath();
// };
class Node
{
    private:
    int value;
    Node *next;
    public:
    Node();
    Node(int newval,Node *newnext);

};

#endif