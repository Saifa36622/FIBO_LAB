#include<iostream>
using namespace std;

class hello
{
    public:
        int num;
        string str;

};

int main()
{
    hello hi;

    hi.num = 55;
    hi.str = "hello world";

    cout << hi.num << "\n" << hi.str << "\n" << endl;
    cout << hi.num << "\n" << hi.str;
}