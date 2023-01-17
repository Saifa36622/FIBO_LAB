#include<iostream>

class hello
{
    public:
        int num;
        std::string str;

};

int main()
{
    hello hi;

    hi.num = 55;
    hi.str = "hello world";

    std::cout << hi.num << "\n" << hi.str << "\n" << std::endl;
    std::cout << hi.num << "\n" << hi.str;
}