#include<iostream>

class knight
{
    public:
        std::string name;
        int attack;
    void hello()
    {
        std::cout << "hello";
    }
    private:
        int deffend;


};
int main()
{
    knight john;
    john.name = "john";
    // john.deffend = 50;
    john.hello();
}