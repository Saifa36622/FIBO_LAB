#include<iostream>

class knight
{
    public:
        std::string name;
        int attack;

};

int main()
{
    knight john;
    john.name = "john";
    john.attack = 100;

    knight jame;
    jame.name = "jame";
    jame.attack = 50;

    std::cout << "knight 1 name = " << john.name << "attack = " << john.attack << "\n";
    std::cout << "knight 2 name = " << jame.name << "attack = " << jame.attack;

}