#include<iostream>

class knight //parent
{
    public:
        std::string name;
        int attack;
    private:
        int deffend;
    

};

class light :public knight //child
{
    public:
        int bonus_atk;
};

int main()
{
    light son;
    son.attack = 10;
    son.bonus_atk = 50;
    int total = son.attack * son.bonus_atk;
    std::cout <<"son atk = " << son.attack << " bonus = "<< son.bonus_atk << " total = "<< total;
}
